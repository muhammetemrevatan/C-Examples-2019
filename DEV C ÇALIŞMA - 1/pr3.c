/* Kullan�c�dan al��veri� tutar�n� girmesini isteyen, al��veri� tutar�na g�re a�a��daki oranlara g�re 
indirim yapacak faturada �denmesi gereken miktar� konsola yazd�ran program� yaz�n�z.

0-100 aras�nda indirim yok
100-500 aras�nda %5 indirim
500-1000 aras�nda %10 indirim
1000 ve �zeri %15 indirim */
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
