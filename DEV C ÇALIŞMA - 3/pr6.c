/*SORU 6) En az iki elemanlý bir integer dizisinin en büyük ikinci elemanýný bulan bir program yazýnýz*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int dizi[8] = {2,5,6,9,8,7,1,3};
	
	int i,dg=dizi[0];
	for(i=0; i<=7; i++)
	{
		if(dizi[i] >= dg)
		{
			dg = dizi[i];
		}
	}
	
	int j,dg2=dizi[0];
	for(j=0; j<=7; j++)
	{
		if(dg == dizi[j])
		{
			continue;
		}
		else if(dizi[j] >= dg2)
		{
			dg2 = dizi[j];
		}
		else
		{
			continue;
		}
	}
	
	printf("%d",dg2);
}
