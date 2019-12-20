/*SORU 8) Kullanýcýdan bir sayý girmesini isteyen ve kullanýcýnýn girdiði sayýyý,
 her satýrýnda birer integer sayý bulunan bir txt dosyasýnda arayan eðer varsa kaçýncý satýrda olduðunu, 
 yoksa aranan sayýnýn dosyada bulunmadýðýný ekrana yazdýran programý yazýnýz */

#include <stdio.h>
#include <conio.h>

int main()
{
	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	FILE *dosya;
	dosya = fopen("ornek8.txt","r");
	int sayi1,satir=0;
	char ch;
	if(dosya != NULL)
	{
		while(!feof(dosya))
		{
			fscanf(dosya,"%d",&sayi1);
			satir++;
			if(sayi == sayi1)
			{
				printf("girilen sayi var : %d  satir sayisi : %d",sayi1,satir);
				exit(1);
			}
			
		}
		printf("girinlen sayi yok");
	}
	else
	{
		printf("Dosya bulunamadi. ");
	}
}
