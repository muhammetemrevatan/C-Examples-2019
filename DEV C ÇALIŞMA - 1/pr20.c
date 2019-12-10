/* SORU 20) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn rakamlarýndan en büyük olaný ekrana yazdýran programý yazýnýz.  */

// 1234%100 = 34 - 4 = 30 /10 = 3
//1234%1000 = 234-34 = 200 / 100 = 2

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int bs_sayisi=0,a=1;
	while(1==1)
	{
		if(n / a < 1)
		{
			break;
		}
		else
		{
			bs_sayisi = bs_sayisi + 1;
			a = a * 10;
		}
	}
	
	int j,carp=1,bsson,bs1;
	for(j=1; j<bs_sayisi; j++)
	{
		carp = carp * 10;
	}
	bsson = n / carp;
	bs1 = n % 10;
	
	int w,dg1=100,islem,dg2=bs1,islemdg=0,snc,islem2;
	for (w=1; w<=bs_sayisi-2; w++)
	{
		islem = n % dg1;
		islem2 = (islem - dg2) / (dg1/10) ;
		dg2 = islem;
		dg1 = dg1 * 10;
		if(islem2 >= islemdg)
		{
			snc = islem2;
		}
		
		islemdg = islem2;
	}
	
	if(snc>bs1 && snc>bsson)
	{
		printf("%d",snc);
	}
	else if(bs1>snc && bs1>bsson)
	{
		printf("%d",bs1);
	}
	else
	{
		printf("%d",bsson);
	}
}
