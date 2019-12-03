/* SORU 15) X ve Y þeklinde iki integer deðeri kullanýcýdan girmesini isteyen, X üssü Y deðerini (XY) hesaplayarak sonucu ekrana yazdýran programý yazýnýz */

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
