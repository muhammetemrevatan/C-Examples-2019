/*Kullan�c�dan �r�n�n al�� fiyat�n� ve sat�� fiyat�n� girmesini isteyen,duruma g�re a�a��daki
3 mesajdan birini konsola yazd�ran program� yaz�n�z.

bu satistan %x kadar kar elde edilmi�tir.
bu satistan %x kadar zarar edilmi�tir.
bu satistan ne kar ne zarar edilmi�tir. */

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
		printf("bu satistan yuzde %f kadar kar elde edilmi�tir",islem);
	}
	else if(af>sf)
	{
		printf("bu satistan yuzde %f kadar zarar edilmi�tir.",islem);
	}
	else if(af=sf)
	{
		printf("bu satistan ne kar ne zarar edilmi�tir.");
	}
	
}
