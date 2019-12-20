/*SORU 22) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn palindrome olup olmadýðýný kontrol ederek; 
palindrome sayý ise 1, deðilse 0 ekrana yazdýran programý yazýnýz. 
(Palindrome sayý kendisi ile tersi ayný olan sayýlara denir, örneðin 14541 gibi...

sayý basamak tek ise 14541
sayý basamal çift ise 145541
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
	
		
	if(bs_sayisi % 2 == 1) //tek koþulu
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
	else // çift koþulu
	{
		
	}
}
