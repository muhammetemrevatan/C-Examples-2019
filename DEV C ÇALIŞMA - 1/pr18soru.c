/* SORU 18) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn kaç basamaklý olduðunu hesaplayarak sonucu ekrana yazdýran programý yazýnýz.  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	long long n;
	long long dg=1;
	int bs=0;
	printf("bir n degeri giriniz : ");
	scanf("%ll",&n); 
	
	while(1==1)
	{
		if(n / dg != 0)  // 12345678910 9 veriyor neden ?
		{
			bs = bs + 1;
			dg = dg * 10;
		}
		else
		{
			printf("basamak sayisi = %d \n",bs);
			break;
		}
	}
}
