/*SORU 6) Bir integer sayýyý parametre olarak alan ve en büyük basamaðýndaki rakamý return eden fonksiyonu yazýnýz. (Örneðin; 37825 sayýsý için 3 return edilmelidir.*/

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
