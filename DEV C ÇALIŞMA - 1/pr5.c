//Kullan�c�dan 3 say� girmesini isteyen ve girlen 3 say�dan en b�y�k de�eri bulup konsola yazd�ran program


#include <stdio.h>
#include <conio.h>

int main(void)
{
	int s1,s2,s3;
	
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&s1);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&s2);
	
	printf("Ucuncu sayiyi giriniz : ");
	scanf("%d",&s3);

	if(s1>s2 && s1>s3)
	{
		printf("Buyuk sayi %d",s1);
	}
	else if(s2>s1 && s2>s3)
	{
		printf("Buyuk sayi %d",s2);
	}
	else
	{
		printf("Buyuk sayi %d",s3);
	}
}
