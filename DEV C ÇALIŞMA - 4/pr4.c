/*SORU 4) Her satýrýnda bir integer sayý bulunan bir txt dosyasýndan okuduðu deðerlerin maksimum'unu bulan ve bu deðeri baþka bir dosyaya yazan programý yazýnýz*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	FILE *dosya;
	dosya = fopen("ornek4.txt","r");
	int sayi,i=0;
	int dizi[4];   // dizinin sayýsýný boþ býrakarak dene bakalým..
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
