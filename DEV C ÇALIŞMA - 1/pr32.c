/*SORU 32) Bir integer N deðerini kullanýcýdan girmesini isteyen ve N satýr kadar aþaðýdaki þekilde çýktýlarý veren iki ayrý program yazýnýz.  

1
22
333
4444

4444
333
22
1    */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int str,stn;
	for(str=1; str<=n; str++)
	{
		for(stn=1; stn<=str; stn++)
		{
			printf("%d",stn);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	int str1,stn1;
	for(str1=n; str1>=1; str1--)
	{
		for(stn1=1; stn1<=str1; stn1++)
		{
			printf("%d",str1);
		}
		printf("\n");
	}
}
