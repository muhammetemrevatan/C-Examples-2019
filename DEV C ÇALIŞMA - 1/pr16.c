/* SORU 16) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n asal say� olup olmad���n� kontrol ederek; asal say� ise 1, de�ilse 0 ekrana yazd�ran program� yaz�n�z. */

#include <stdio.h>
#include <conio.h>

main(void)
{
	int n,islem;
	printf("n degerini giriniz : ");
	scanf("%d",&n);
	
	int i;
	for(i=2; i<n; i++) //1 i ve kendisini dahil etmedik
	{
		if(n % i == 0)
		{
			islem = 0;
			break;
		}
		else
		{
			islem = 1;
		}
	}
	printf("%d",islem);
}
