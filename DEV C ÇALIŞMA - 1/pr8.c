/*Kullanýcýdan ürünün alýþ fiyatýný ve satýþ fiyatýný girmesini isteyen,duruma göre aþaðýdaki
3 mesajdan birini konsola yazdýran programý yazýnýz.

bu satistan %x kadar kar elde edilmiþtir.
bu satistan %x kadar zarar edilmiþtir.
bu satistan ne kar ne zarar edilmiþtir. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	float af,sf,kar,islem;
	
	printf("alis fiyati giriniz : ");
	scanf("%f",&af);
	printf("satis fiyati giriniz : ");
	scanf("%f",&sf);
	kar = sf-af;
	islem = kar/af *100;
	
	if(sf>af)
	{
		printf("bu satistan yuzde %f kadar kar elde edilmiþtir",islem);
	}
	else if(af>sf)
	{
		printf("bu satistan yuzde %f kadar zarar edilmiþtir.",islem);
	}
	else if(af=sf)
	{
		printf("bu satistan ne kar ne zarar edilmiþtir.");
	}
	
}
