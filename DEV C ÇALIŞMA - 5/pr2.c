/*SORU 2) Üç integer deðiþkenin en büyük deðerini pointer kullanarak bulan ve sonucu ekrana yazdýran programý yazýnýz*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p1,*p2,*p3;
	int a,b,c;
	
	a = 20;
	b = 555;
	c = 15;
	
	p1 = &a;
	p2 = &b;
	p3 = &c;
	
	if (*p1 > *p2 && *p1 > *p3)
	{
		printf("en buyuk deger : %d",*p1);
	}
	else if (*p2 > *p1 && *p2 > *p3)
	{
		printf("en buyuk deger : %d",*p2);
	}
	else
	{
		printf("en buyuk deger : %d",*p3);
	}
	
}
