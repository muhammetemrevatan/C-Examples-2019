/*SORU 1) Bir integer dizisinin elemanlar�n�n toplam�n� hesaplayan bir program yaz�n�z. 
(NOT: Bu soruda ve di�er sorularda yazd���n�z programlar� test etmek i�in gerekli dizi(leri) kendiniz tan�mlayabilir, dizi elemanlar�n�n de�erlerini kendiniz atayabilir veya kullan�c�dan girmesini isteyebilirsiniz.) */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a = 3;
	int dizi[3] = {1,3,3};
	
	int i,top=0;
	for(i=0; i<a; i++)
	{
		top=top+dizi[i];
		
	}
	printf("%d",top);
	
}
