/*SORU 31) Bir integer N de�erini kullan�c�dan girmesini isteyen ve N sat�r kadar a�a��daki �ekilde ��kt�lar� veren iki ayr� program yaz�n�z. 

******
 ******
  ******
   ******
    ******
    
1
22
333
4444
55555
666666      */

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
		for(bos=1; bos<=str-1; bos++)
		{
			printf(" ");
		}
		for(yldz=1; yldz<=6; yldz++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	int str1,stn;
	for(str1=1; str1<=n; str1++)
	{
		for(stn=1; stn<=str1; stn++)
		{
			printf("%d",str1);
		}
		printf("\n");
	}
}



