/* SORU 16) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn asal sayý olup olmadýðýný kontrol ederek; asal sayý ise 1, deðilse 0 ekrana yazdýran programý yazýnýz. */

#include <stdio.h>
#include <conio.h>

main(void)
{
	int n,islem;
	printf("n degerini giriniz : ");
	scanf("%d",&n);
	
	int i;
	for(i=2; i<n; i++) //1 i ve kendisini dahil etmedik
	{
		if(n % i == 0)
		{
			islem = 0;
			break;
		}
		else
		{
			islem = 1;
		}
	}
	printf("%d",islem);
}
