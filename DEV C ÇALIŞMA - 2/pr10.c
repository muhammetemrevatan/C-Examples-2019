/*SORU 10) Bir integer N deðerini parametre olarak alan ve ekrana N satýr kadar aþaðýdaki çýktýyý yazan üç ayrý metod yazýnýz. (Örnekler N = 5 içindir) 

5
44
333
2222
11111

54321
4321
321
21
1

5
45
345
2345
12345   */

#include <stdio.h>
#include <conio.h>


void metod1(int n)
{
	int str,stn,dg=n;
	
	for(str=1; str<=n; str++)
	{
		for(stn=1; stn<=str; stn++)
		{
			printf("%d",dg);
		}
		dg = dg-1;
		printf("\n");
	}	
}

void metod2(int n)
{
	int str,stn,dg,dg1=n;
	
	for(str=n; str>=1; str--)
	{
		dg=dg1;
		for(stn=1; stn<=str; stn++)
		{
			printf("%d",dg);
			dg = dg - 1;
		}
		printf("\n");
		dg1 = dg1 - 1;
	}
}

void metod3(int n)
{
	int str,stn,dg,dg1=n;
	
	for(str=1; str<=n; str++)
	{
		dg = dg1;
		for(stn=1; stn<=str; stn++)
		{
			printf("%d",dg);
			dg = dg + 1;
		}
		dg1 = dg1 - 1;
		printf("\n");
	}
}

int main(void)
{
	metod1(5);
	printf("\n");
	metod2(5);
	printf("\n");
	metod3(5);
}

