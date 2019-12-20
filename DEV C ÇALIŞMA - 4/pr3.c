/*SORU 3) Her satýrýnda aralarýnda bir boþluk olan iki integer sayý bulunan bir txt dosyasýndan okuduðu deðerleri diziye aktaran programý yazýnýz. */

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
