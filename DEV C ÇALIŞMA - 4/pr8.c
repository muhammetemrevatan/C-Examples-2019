/*SORU 8) Kullan�c�dan bir say� girmesini isteyen ve kullan�c�n�n girdi�i say�y�,
 her sat�r�nda birer integer say� bulunan bir txt dosyas�nda arayan e�er varsa ka��nc� sat�rda oldu�unu, 
 yoksa aranan say�n�n dosyada bulunmad���n� ekrana yazd�ran program� yaz�n�z */

#include <stdio.h>
#include <conio.h>

int main()
{
	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	FILE *dosya;
	dosya = fopen("ornek8.txt","r");
	int sayi1,satir=0;
	char ch;
	if(dosya != NULL)
	{
		while(!feof(dosya))
		{
			fscanf(dosya,"%d",&sayi1);
			satir++;
			if(sayi == sayi1)
			{
				printf("girilen sayi var : %d  satir sayisi : %d",sayi1,satir);
				exit(1);
			}
			
		}
		printf("girinlen sayi yok");
	}
	else
	{
		printf("Dosya bulunamadi. ");
	}
}
