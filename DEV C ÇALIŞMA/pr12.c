/*SORU 12) Bir integer N de�erini kullan�c�dan girmesini isteyen ve N! de�erini hesaplay�p sonucu ekrana yazd�ran program� yaz�n�z*/

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
