/*SORU 28) Bir integer N de�erini kullan�c�dan girmesini isteyen ve N sat�r kadar a�a��daki �ekilde ��kt�lar� veren iki ayr� program yaz�n�z.
*
**
***
****
*****
******
*******
/
*******
******
*****
****
***
**
*       */
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i,j,a,b;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(a=7; a>=1; a--)
	{
		for(b=1; b<=a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
}








