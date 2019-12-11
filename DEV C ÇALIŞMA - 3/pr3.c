/*SORU 3) Bir integer dizisinin tek elemanlarýn toplamý ile çift elemanlarýn toplamý arasýndaki farký hesaplayan bir program yazýnýz.*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int dizi[8] = {2,5,6,9,8,7,1,3};
	
	int tek=0,cift=0,i,sonuc;
	
	for(i=0; i<=7; i++)
	{
		if(dizi[i] % 2 == 0)
		{
			cift+=dizi[i];
		}
		else
		{
			tek+=dizi[i];
		}
	}
	if(tek>cift)
	{
		sonuc = tek - cift;
		printf("%d",sonuc);
	}
	else
	{
		sonuc= cift - tek;
		printf("%d",sonuc);
	}
}
