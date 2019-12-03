/*SORU 27) A ve B þeklinde iki integer deðeri kullanýcýdan girmesini isteyen ve mod operatörünü (%) kullanmadan A%B'yi hesaplayarak sonucu ekrana yazdýran programý yazýnýz.*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a,b,d=0,sonuc;
	printf("a ve b degerlerini giriniz : ");
	scanf("%d %d",&a,&b);
	
	while(d<a)
	{
		d = d + b;
	}
	sonuc = a - d + b;
	
	printf("%d",sonuc);
}
