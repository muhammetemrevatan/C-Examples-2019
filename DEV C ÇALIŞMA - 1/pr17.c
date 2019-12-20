/* SORU 17) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn 2'nin üssü olup olmadýðýný 
(1, 2, 4, 8, 16, 32, ... , 1024, ...) kontrol eden; 2'nin üssü ise kaçýncý üssü olduðunu, deðilse -1 ekrana yazdýran programý yazýnýz. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n;
	int deger=0;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	

	while(n!=1) // 12345678910 yazýldýgýnda 9 sonucunu veriyor... neden ??
	{
		if(n % 2 == 1)
		{
			deger = -1;
			break;
		}
		else
		{
			n = n/2;
			deger = deger + 1;
		}
		
	}
	printf("%d",deger);
	
	// 32 16 8 4 2 1 9 
	// 50 25 
}
