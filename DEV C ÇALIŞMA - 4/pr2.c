/*SORU 2) Bir txt dosyasýndaki satýr sayýsýný bulan ve ekrana yazdýran programý yazýnýz*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	FILE *dosya;
	dosya = fopen("ornek2.txt","r");
	char ch;
	int ss=0;
	
	if(dosya != NULL)
	{
		while(!feof(dosya))
		{
			ch = getc(dosya); // hangi karakteri okuyacaðýný nasýl anlýyor ???
			if(ch == '\n')
			{
				ss++;
			}
		}
		printf("Satir sayisi = %d ",ss);
		fclose(dosya);
	}
	else
	{
		printf("Dosya bulunamadi. ");
	}
}
