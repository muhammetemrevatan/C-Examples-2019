/*SORU 3) Her sat�r�nda aralar�nda bir bo�luk olan iki integer say� bulunan bir txt dosyas�ndan okudu�u de�erleri diziye aktaran program� yaz�n�z. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	FILE *filepointer;
	filepointer = fopen("ornek3.txt","r");
	int dizi[4][2];
	int sayi;
	int satir=0,sutun=0;
	
	if(filepointer != NULL)
	{
		while(!feof(filepointer))
		{
			for(satir=0; satir<4; satir++)
			{
				for(sutun=0; sutun<2; sutun++)
				{
					fscanf(filepointer,"%d",&sayi);
					dizi[satir][sutun] = sayi;
				}
			}
		}
		printf("%d",dizi[3][1]);
	}
	else
	{
		printf("Dosya bulunamadi . ");
	}
}
