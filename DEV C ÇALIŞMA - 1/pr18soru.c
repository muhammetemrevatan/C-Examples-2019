/* SORU 18) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n ka� basamakl� oldu�unu hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,a=1,sonuc,bas=0;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int i;
	
	while(1==1) //12345678910 girilid�inde 9 sonucunu veriyor nedne 
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
