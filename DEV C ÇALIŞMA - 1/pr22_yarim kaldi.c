/*SORU 22) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n palindrome olup olmad���n� kontrol ederek; 
palindrome say� ise 1, de�ilse 0 ekrana yazd�ran program� yaz�n�z. 
(Palindrome say� kendisi ile tersi ayn� olan say�lara denir, �rne�in 14541 gibi...

say� basamak tek ise 14541
say� basamal �ift ise 145541
//1234 % 100 = 23 - 3 = 20 /10 = 2
//123
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,a=1,bs_sayisi=0;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n); 
	
	while(1==1)
	{
		if(n / a != 0)  // 12345678910 9 veriyor neden ?
		{
			bs_sayisi = bs_sayisi + 1;
			a = a * 10;
		}
		else
		{
			printf("basamak sayisi = %d \n",bs_sayisi);
			break;
		}
	}
	
	int j,sayac,bs1,bsilk,dg=1,bsbir,bsiki;
	for(j=1; j<bs_sayisi; j++)
	{
		dg = dg * 10;
	}
	bsilk = n / dg;
	bs1 = n % 10;
	
		
	if(bs_sayisi % 2 == 1) //tek ko�ulu
	{
		sayac = (bs_sayisi - 1) / 2;
		if(bsilk == bs1)
		{
			int w;
			for(w=1; w<=sayac; w++)
			{
				
			}
		}
		
	}
	else // �ift ko�ulu
	{
		
	}
}
