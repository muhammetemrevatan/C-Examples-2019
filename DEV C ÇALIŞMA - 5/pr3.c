/*SORU 3) Kullan�c�dan bir N integer de�eri girmesini isteyen ve pointer kullanarak N! de�erini hesaplayan ve sonucu ekrana yazd�ran program� yaz�n�z. */

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
