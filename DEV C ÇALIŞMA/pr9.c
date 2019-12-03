/* SORU 9) Kullanýcýdan üçgenin üç kenar uzunluðunu girmesini isteyen, tüm kenar uzunluklarý birbirine eþitse konsola
 "EÞKENAR ÜÇGEN", sadece iki kenar uzunluðu birbirine eþitse "ÝKÝZKENAR ÜÇGEN", 
üç kenar uzunluðu da birbirinden farklýysa "ÇEÞÝTKENAR ÜÇGEN" yazdýran programý yazýnýz. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int k1,k2,k3;
	printf("1. kenari giriniz : ");
	scanf("%d",&k1);
	printf("2. kenari giriniz : ");
	scanf("%d",&k2);
	printf("3. kenari giriniz : ");
	scanf("%d",&k3);
	
	if (k1==k2 && k2==k3)
	{
		printf("ESKENAR UCGEN");
	}
	else if(k1==k2 || k2==k3 || k1==k3)
	{
		printf("ikizkenar ucgen");
	}
	else if(k1!=k2 && k2!=k3 && k1!=k3)
	{
		printf("cesitkenar ucgen");
	}
	else
	{
		printf("tanýmsýz");
	}
}
