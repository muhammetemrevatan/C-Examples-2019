/*SORU 2) Bir txt dosyas�ndaki sat�r say�s�n� bulan ve ekrana yazd�ran program� yaz�n�z*/
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
			ch = getc(dosya); // hangi karakteri okuyaca��n� nas�l anl�yor ???
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
