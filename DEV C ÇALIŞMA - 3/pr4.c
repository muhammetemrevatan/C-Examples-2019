/*SORU 4) Bir integer dizisinin negatif elemanlar�n adeti ile pozitif elemanlar�n adeti aras�ndaki fark� hesaplayan bir program yaz�n�z. */

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
			cift+=1;
		}
		else
		{
			tek+=1;
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
