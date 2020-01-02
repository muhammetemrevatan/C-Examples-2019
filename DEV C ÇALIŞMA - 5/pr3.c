/*SORU 3) Kullanýcýdan bir N integer deðeri girmesini isteyen ve pointer kullanarak N! deðerini hesaplayan ve sonucu ekrana yazdýran programý yazýnýz. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,toplam = 1;
	int *p;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	p = &toplam;
	
	int i;
	for(i = n; i>0; i--)
	{
		toplam = toplam * i;
	}
	printf("%d",*p);
}
