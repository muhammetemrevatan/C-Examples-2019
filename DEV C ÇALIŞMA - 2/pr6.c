/*SORU 6) Bir integer say�y� parametre olarak alan ve en b�y�k basama��ndaki rakam� return eden fonksiyonu yaz�n�z. (�rne�in; 37825 say�s� i�in 3 return edilmelidir.*/

#include <stdio.h>
#include <conio.h>

int fonk(int a)
{
	int carp = 1,sonuc = 1, bs = 0;
	
	while(sonuc >= 1)
	{
		sonuc = a / carp;
		carp = carp * 10;
		bs = bs + 1;
	}
	
	return a/(carp/100);
}

int main(void)
{
	int yaz;
	yaz = fonk(544456);
	printf("%d",yaz);
}
