/*SORU 30) Bir integer N de�erini kullan�c�dan girmesini isteyen ve N sat�r kadar a�a��daki �ekilde ��kt�lar� veren iki ayr� program yaz�n�z. 

    *    
   ***
  *****
 *******
*********

*********
 *******
  *****
   ***
    *             */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int str,bos,yldz;
	for(str=1; str<=n; str++)
	{
		for(bos=n-str; bos>=1; bos--)
		{
			printf(" ");
		}
		for(yldz=1; yldz<=str*2-1; yldz++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("\n\n");
	
	int str1,bos1,yldz1,a=n;
	for(str1=1; str1<=n; str1++)
	{
		for(bos1=1; bos1<=str1-1; bos1++)
		{
			printf(" ");
		}
		
		for(yldz1=1; yldz1<=a*2-1; yldz1++)
		{
			printf("*");
		}
		a = a - 1;
		
		printf("\n");
	}
}





