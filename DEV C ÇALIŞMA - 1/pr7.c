/* Kullan�c�dan dolar kurunu ve dolar miktar�n� girmesini isteyen, girilen miktar�n TL 
kar��l��� hesaplay�p konsola yazd�ran program� yaz�n�z.*/
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
