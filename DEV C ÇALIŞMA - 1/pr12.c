/*SORU 12) Bir integer N deðerini kullanýcýdan girmesini isteyen ve N! deðerini hesaplayýp sonucu ekrana yazdýran programý yazýnýz*/

#include <stdio.h>
#include <conio.h>

main(void)
{
	int n,carp=1;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int i;
	for(i=n; i>=1; i--)
	{
		carp = carp * i;
	}
	printf("%d",carp);
}
