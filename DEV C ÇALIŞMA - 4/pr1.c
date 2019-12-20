/*SORU 1) Bir integer dizi içindeki her elemaný ayrý satýrda bir txt dosyasýna yazan programý yazýnýz.*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int dizi[5] = {11,12,13,14,15};
	
	FILE *dosya;
	dosya = fopen("ornek1.txt","w");
	if(dosya != NULL)
	{
		int i;
		for(i=0; i<=4; i++)
		{
			fprintf(dosya,"%d",dizi[i]);
			fprintf(dosya,"\n");
		}
	}
	else
	{
		printf("Dosya bulunamadi. ");
	}
	fclose(dosya);
}
