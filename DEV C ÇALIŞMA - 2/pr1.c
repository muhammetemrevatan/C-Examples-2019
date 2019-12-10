/*SORU 1) Bir integer sayýyý parametre olarak alan ve bu sayýnýn küpünü hesaplayarak return eden fonksiyonu yazýnýz. */

#include <stdio.h>
#include <conio.h>

int kupbul(int a)
{
	int carp=1;
	int i;
	for(i=1; i<=3; i++)
	{
		carp = carp * a;
	}
	return carp;
}

int main(void)
{
	int z;
	z = kupbul(2);
	printf("%d",z);
}
