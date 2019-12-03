/*SORU 23) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn ikilik tabandaki (binary) karþýlýðýný hesaplayarak sonucu ekrana yazdýran programý yazýnýz. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,a,n2;
	printf("bir n sayisi giriniz : ");
	scanf("%d",&n);
	
	n2 = n;
	
	while(1==1)
	{
		if(n != 1 && n != 0)
		{
			a = n % 2;
			printf("%d",a);
			n = n / 2;
		}
		else
		{
			if(n2 % 2 == 0)
			{
				printf("%d",0);
			}
			else
			{
				printf("%d",1);
			}
			break;
		}
	}
	
	
}
