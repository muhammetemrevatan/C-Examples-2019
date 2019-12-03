/*SORU 28) Bir integer N deðerini kullanýcýdan girmesini isteyen ve N satýr kadar aþaðýdaki þekilde çýktýlarý veren iki ayrý program yazýnýz.
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








