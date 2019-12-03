/* SORU 18) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn kaç basamaklý olduðunu hesaplayarak sonucu ekrana yazdýran programý yazýnýz.  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,a=1,sonuc,bas=0;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int i;
	
	while(1==1) //12345678910 girilidðinde 9 sonucunu veriyor nedne 
	{
		if(n % a == n)
		{
			break;
		}
		else
		{
			bas = bas + 1;
			a = a * 10;
		}
	}
	printf("%d",bas);
}
