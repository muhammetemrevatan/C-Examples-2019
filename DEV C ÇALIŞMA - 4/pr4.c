/*SORU 4) Her sat�r�nda bir integer say� bulunan bir txt dosyas�ndan okudu�u de�erlerin maksimum'unu bulan ve bu de�eri ba�ka bir dosyaya yazan program� yaz�n�z*/
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
	int eb=0;
	
	if(dosya != NULL)
	{
		int i,k=1;
		for(i=0; i<=3; i++)
		{
			if(eb < dizi[i])
			{
				eb = dizi[i];
			}
			
		}
		fprintf(dosya,"en buyuk sayi %d dir.",eb);
		
		fclose(dosya);
	}
	else
	{
		printf("Dosya olusturulamadi. ");
	}
	
	
	
	
	
}
