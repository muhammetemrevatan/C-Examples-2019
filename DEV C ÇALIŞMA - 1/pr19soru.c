/* SORU 19) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n rakamlar�n�n toplam�n� hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,a=1,deger=0,islem;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n); 
	
	// 10 ile b�l�m�nden kalan 1 ler basamag�n� verir. 1234 % 10 == 4 yani bir ler basamag�
	// 100 ile bml�m�nden kalan 1234 % 100 == 34 t�r. 34-4 = 30 / 10 = 3 bu da onlar basamag�n� bulman�n form�l�..
	//1000 ile b�l�m�nden kalan  1234 % 1000 == 234 - 34 = 200 /100 = 2 buda y�zler basamag� form�l�
	//1000 ile b�l�m� 1234/1000 = 1 dir buda binler basamag�
	
	
		
}
