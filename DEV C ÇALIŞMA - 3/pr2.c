/*SORU 2) Bir integer dizisinin elemanlarýnýn ortalamasýný hesaplayan bir program yazýnýz. */
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int dizi[3] = {1,2,3};
	
	int i,tp=0,ort;
	for(i=0; i<=2; i++)
	{
		tp+=dizi[i];
		ort = tp / 3;
	}
	printf("%d",ort);
}
