/*SORU 2) Bir integer dizisinin elemanlar�n�n ortalamas�n� hesaplayan bir program yaz�n�z. */
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
