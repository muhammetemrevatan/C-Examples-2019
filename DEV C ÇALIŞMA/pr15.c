/* SORU 15) X ve Y �eklinde iki integer de�eri kullan�c�dan girmesini isteyen, X �ss� Y de�erini (XY) hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z */

#include <stdio.h>
#include <conio.h>


main(void)
{
	int x,y;
	int carp=1;
	printf("x ve y degeri giriniz : ");
	scanf("%d %d",&x,&y);
	
	int i;
	for(i=1; i<=y; i++)
	{
		carp=carp*x;
	}
	printf("%d",carp);
}
