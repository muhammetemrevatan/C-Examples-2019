/*SORU 27) A ve B �eklinde iki integer de�eri kullan�c�dan girmesini isteyen ve mod operat�r�n� (%) kullanmadan A%B'yi hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.*/

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
