/*SORU 10) A�a��daki gibi bir kaynak dosyas�ndaki verileri, hedef dosyas�na a�a��daki �ekilde yazan program� yaz�n�z.

ali,demir,1234,blm,			1234 - Ali Demir, BLM
Veli,�elik,1235,bme,		1235 - Veli �elik, BME             */

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *dosya = fopen("ornek10kaynak.txt","r");
	FILE *dosya2 = fopen("ornek10hedef.txt","w");
	FILE *dosya3 = fopen("ornek10hedef.txt","r");
	char ch;
	char ad[50],soyad[50],bolum[50],no[50];
	
	if(dosya != NULL)
	{
		while(!feof(dosya))
		{
			ch = fgetc(dosya);
			if(ch != ',')
			{
				fprintf(dosya2,"%c",ch);
			}
			else
			{
				fprintf(dosya2," ");
			}
		}
		
		fscanf(dosya3,"%s %s",&ad,&soyad);
		printf("%s -- %s",ad,soyad);
		
		fclose(dosya);
		fclose(dosya2);
		fclose(dosya3);
		
		
		
		
		
		
	}
	else
	{
		printf("dosya bulunamadi. ");
	}
}
/*
Ali,Demir,1234,BLM,
Veli,�elik,1235,BME,
Hasan,Kara,1236,INM,
Mehmet,Sari,1237,BLM,
*/
