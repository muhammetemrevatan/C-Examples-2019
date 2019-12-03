/* Kullanýcýdan dolar kurunu ve dolar miktarýný girmesini isteyen, girilen miktarýn TL 
karþýlýðý hesaplayýp konsola yazdýran programý yazýnýz.*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	float dolarkur,dolarmik,hesap;
	
	printf("Dolar kurununu giriniz(1 dolar kac tl dir?) : ");
	scanf("%f",&dolarkur);
	
	printf("Dolar miktarini giriniz : ");
	scanf("%f",&dolarmik);
	
	hesap = dolarmik * dolarkur;
	printf("%f TL.",hesap);
	
}
