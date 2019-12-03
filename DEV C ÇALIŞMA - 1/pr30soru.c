/*
   *   
  ***  
 ***** 
*******

*******
 *****
  ***
   *
*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i,j,b,a=1,c=3;
	
	for(i=1; i<=4; i++)
	{
		for(b=c; b>=1; b--)
		{
			printf(" ");
		}
		for(j=1; j<=a; j++)
		{
			printf("*");
		}
		a = a + 2;
		c = c - 1;
		printf("\n");

	}
	
	printf("\n\n");
	
	int x,y=1,z,w,e=7;
	
	for(x=1; x<=4; x++)
	{
		for(w=1; w<=e; w++)
		{
			printf("*");
		}
		printf("\n");
		
		for(x=1; x<=y; x++)
		{
			printf(" ");
		}
		y = y + 1;
		e = e - 2;
	}
	
	
	
}
