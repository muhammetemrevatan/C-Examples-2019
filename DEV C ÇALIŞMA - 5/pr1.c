/*SORU 1) �ki de�i�kenin de�erini pointer kullanarak kendi aras�nda de�i�tiren program� yaz�n�z. (�rne�in a = 3, b = 7 ise, sonu�ta a = 7, b = 3 olmal�d�r) */

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
