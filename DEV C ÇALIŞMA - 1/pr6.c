//kullan�c�dan ay numaras�n� girmesini isteyen (1-12 aral�g�nda) girilen ay numaras�na g�re mevsimi konsola yazd�ran program

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ayno;
	printf("Ay Numarasi giriniz (1-12 araliginda) : ");
	scanf("%d",&ayno);
	
	switch(ayno)
	{
		case 1:
			printf("Ocak");
			break;
		case 2:
			printf("�ubat");
			break;
		default:
			printf("ge�erli ay no giriniz");
			break;
	}
}
