/*SORU 5) Bir txt dosyas�n�n i�eri�ini ba�ka bir txt dosyas�na kopyalayan program� yaz�n�z.*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	FILE *dosya;
	dosya = fopen("ornek4.txt","r");
	int sayi,i=0;
	int dizi[4];   // dizinin say�s�n� bo� b�rakarak dene bakal�m..
	if(dosya != NULL)
	{
		while(!feof(dosya))
		{
			fscanf(dosya,"%d",&sayi);
			dizi[i] = sayi;
			i++;
		}
		fclose(dosya);
	}
	else
	{
		printf("Dosya bulunamadi. ");
	}
	
	
	dosya = fopen("ornek4_2.txt","w");
	
	if(dosya != NULL)
	{
		int i;
		for(i=0; i<=3; i++)
		{
			fprintf(dosya,"%d",dizi[i]);
			fprintf(dosya,"\n");
			k++;
		}
		
		fclose(dosya);
	}
	else
	{
		printf("Dosya olusturulamadi. ");
	}
	
	
	
	
	
}
