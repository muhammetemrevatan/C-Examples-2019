/*SORU 5) Bir integer dizisinin en k���k eleman�n� bulan bir program yaz�n�z. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int dizi[8] = {2,5,6,9,8,7,1,3};
	
	
	int i,kck=dizi[0];
	for(i=0; i<=7; i++)
	{
		if(dizi[i] <= kck)
		{
			kck = dizi[i];
		}
	}
	printf("%d",kck);
}
