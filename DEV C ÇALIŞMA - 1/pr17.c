/* SORU 17) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n 2'nin �ss� olup olmad���n� 
(1, 2, 4, 8, 16, 32, ... , 1024, ...) kontrol eden; 2'nin �ss� ise ka��nc� �ss� oldu�unu, de�ilse -1 ekrana yazd�ran program� yaz�n�z. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n;
	int deger=0;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	

	while(n!=1) // 12345678910 yaz�ld�g�nda 9 sonucunu veriyor... neden ??
	{
		if(n % 2 == 1)
		{
			deger = -1;
			break;
		}
		else
		{
			n = n/2;
			deger = deger + 1;
		}
		
	}
	printf("%d",deger);
	
	// 32 16 8 4 2 1 9 
	// 50 25 
}
