/*SORU 9) Bir txt dosyasýndaki her satýrý ayrý ayrý dosyalarýn içine yazan programý yazýnýz*/

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *dosya;
	dosya = fopen("ornek9.txt","r");
	char ch[50];
	if(dosya != NULL)
	{
		fgets(ch,49,dosya);
		FILE *dosya2 = fopen("ornek9_2.txt","w");
		fputs(ch,dosya2);
		fclose(dosya2);
		
		fgets(ch,49,dosya);
		FILE *dosya3 = fopen("ornek9_3.txt","w");
		fputs(ch,dosya3);
		fclose(dosya3);
		
		fgets(ch,49,dosya);
		FILE *dosya4 = fopen("ornek9_4.txt","w");
		fputs(ch,dosya4);
		fclose(dosya4);
		
		
		fclose(dosya);
	}
	else
	{
		printf("Dosya bulunmadi");
	}
}
