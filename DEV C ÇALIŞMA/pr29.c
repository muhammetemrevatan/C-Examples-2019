/*SORU 29) Bir integer N deðerini kullanýcýdan girmesini isteyen ve N satýr kadar aþaðýdaki þekilde çýktýlarý veren iki ayrý program yazýnýz

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
      *   */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i,j,k;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=7-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	int a,b,c;
	for (a=7; a>=1; a--)
	{
		for(b=1; b<=7-a; b++)
		{
			printf(" ");
		}
		for(c=1; c<=a; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}


