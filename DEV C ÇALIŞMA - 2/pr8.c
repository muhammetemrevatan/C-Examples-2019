/*SORU 8) �ki integer say�y� parametre olarak alan ve bu iki say�n�n en b�y�k ortak b�lenini (EBOB) bularak return eden fonksiyonu yaz�n�z*/

#include <stdio.h>
#include <conio.h>

int ebob(int s1)
{
	int i=0,sayac=2;
	int dizi[10];
	
	while(1==1)
	{
		if(s1 % sayac == 0)
		{
			dizi[i] = sayac;
			s1 = s1 / sayac;
			i = i + 1;
		}
		else
		{
			sayac = sayac + 1;
		}
		if(s1 == 1)
		{
			printf("%d",dizi[9]);
			break;
		}
	}
	
}
main()
{
	ebob(6);
}
