/*SORU 33) Bir integer N deðerini kullanýcýdan girmesini isteyen ve N satýr kadar aþaðýdaki þekilde çýktý veren bir program yazýnýz.

0
0 1
0 2 4
0 3 6 9
0 4 8 12 16 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int str,stn,dg,dg1;
	for(str=1; str<=n; str++)
	{
		dg=str-1;
		dg1 = str-1;
		printf("%d ",0);
		for(stn=1; stn<=str-1; stn++)
		{
			printf("%d ",dg);
			dg = dg + dg1;
		}
		printf("\n");
	}
}
