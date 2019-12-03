/* Kullanýcýdan alýþveriþ tutarýný girmesini isteyen, alýþveriþ tutarýna göre aþaðýdaki oranlara göre 
indirim yapacak faturada ödenmesi gereken miktarý konsola yazdýran programý yazýnýz.

0-100 arasýnda indirim yok
100-500 arasýnda %5 indirim
500-1000 arasýnda %10 indirim
1000 ve üzeri %15 indirim */
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int tutar;
	int sontutar = 0;
	
	printf("Alisveris tutarini giriniz : ");
	scanf("%d",&tutar);
	
	if(tutar>=0 && tutar<=99)
	{
		printf("Odemeniz gereken miktar : %d",tutar);
	}
	else if(tutar>=100 && tutar<=499)
	{
		sontutar = tutar - tutar*5/100;
		printf("Odemeniz gereken miktar : %d",sontutar);
	}
	else if(tutar>=500 && tutar<=999)
	{
		sontutar = tutar - tutar*10/100;
		printf("Odemeniz gereken miktar : %d",sontutar);
	}
	else if(tutar>=1000)
	{
		sontutar = tutar - tutar*15/100;
		printf("Odemeniz gereken miktar : %d",sontutar);
	}
	else
	{
		printf("Gecerli bir miktar giriniz..");
	}
}
