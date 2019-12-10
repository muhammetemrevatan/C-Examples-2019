/*SORU 21) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn tersini hesaplayarak sonucu ekrana yazdýran programý yazýnýz.*/

// 1234 % 10 = 4
// 1234 % 100 = 34 - 4 = 30 / 10 = 3
// 1234 % 1000 = 234 - 34 = 200 / 100 = 2
// 1234 / 1000 = 1


#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	printf("bir n sayisi giriniz : ");
	scanf("%d",&n);
	
	int bs_sayi,dg=1;
	while(1==1)
	{
		if(n / dg < 1)
		{
			break;
		}
		else
		{
			dg = dg*10;
			bs_sayi = bs_sayi + 1;
		}
	}
	
	int i,a=1;
	for(i=1; i<bs_sayi; i++)
	{
		a=a*10;
	}
	
	int bs1,bsson;
	bs1 = n % 10;
	bsson= n / a;
	
	printf("%d",bs1);
	
	int j,islem,b=100,islem2,dg2=bs1;
	for(j=1; j<=bs_sayi-2; j++)
	{
		islem = n % b;
		islem2 = (islem - dg2) / (b/10);
		dg2 = islem;
		b = b * 10;
		printf("%d",islem2);
	}
	
	printf("%d",bsson);
	
	
}

