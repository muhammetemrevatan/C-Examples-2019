/*SORU 6) Ýki txt dosyasýný tek bir txt  dosyasý içinde birleþtiren programý yazýnýz. */

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *dosya2 = fopen("ornek6_3.txt","w");
	FILE *dosya3 = fopen("ornek6_2.txt","r");
	FILE *dosya = fopen("ornek6_1.txt","r");
	
	char ekle;
	
	if(dosya != NULL && dosya3 != NULL)
	{
		while(!feof(dosya))
		{
			ekle = fgetc(dosya);
			fputc(ekle,dosya2);
		}
		while(!feof(dosya3))
		{
			ekle = fgetc(dosya3);
			fputc(ekle,dosya2);
		}
		
		fclose(dosya2);
		fclose(dosya3);
		fclose(dosya);
	}
	else
	{
		printf("dosya bulunamadi. ");
	}
}
