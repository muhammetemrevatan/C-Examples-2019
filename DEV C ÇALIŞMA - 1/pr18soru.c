/* SORU 18) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n ka� basamakl� oldu�unu hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,dg=1,bs=0;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n); 
	
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
