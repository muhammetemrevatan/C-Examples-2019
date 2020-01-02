/*SORU 1) Ýki deðiþkenin deðerini pointer kullanarak kendi arasýnda deðiþtiren programý yazýnýz. (Örneðin a = 3, b = 7 ise, sonuçta a = 7, b = 3 olmalýdýr) */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int *pt1,*pt2;
	int sayi1,sayi2,a;
	
	sayi1 = 10;
	sayi2 = 15;
	
	pt1 = &sayi1;
	pt2 = &sayi2;
	
	a = *pt1;
	*pt1 = *pt2;
	*pt2 = a;
	
	printf("sayi1 degeri : %d\n",sayi1);
	printf("sayi2 degeri : %d\n",sayi2);
	
	
	
}
