
/* SORU 19) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n rakamlar�n�n toplam�n� hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.  */
	// 10 ile b�l�m�nden kalan 1 ler basamag�n� verir. 1234 % 10 == 4 yani bir ler basamag�
	// 100 ile bml�m�nden kalan 1234 % 100 == 34 t�r. 34-4 = 30 / 10 = 3 bu da onlar basamag�n� bulman�n form�l�..
	//1000 ile b�l�m�nden kalan  1234 % 1000 == 234 - 34 = 200 /100 = 2 buda y�zler basamag� form�l�
	//1000 ile b�l�m� 1234/1000 = 1 dir buda binler basamag�
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,dg=1,bs=0;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n); 
	
	while(1==1)
	{
		if(n / dg != 0)
		{
			bs = bs + 1;
			dg = dg * 10;
		}
		else
		{
			printf("basamak sayisi = %d \n",bs);
			break;
		}
	}
	
	int i,son=1,bs1,bsilk;
	bs1 = n % 10; // birler basamag� yani son basamak
	for(i=1; i<bs; i++)
	{
		son = son *10;
	}
	bsilk = n / son; // sayinin ilk basamag�
	printf("%d ",bs1);
	
	int j,bsbasla=100,snc = 0,dg2 = bs1,sonuc1 = bs1+bsilk;
	for(j=1; j<=bs-2; j++)
	{
		snc = n % bsbasla;
		snc = snc - dg2;
		snc = snc / (bsbasla/10);
		printf("%d ",snc);
		bsbasla = bsbasla * 10;
		sonuc1 = sonuc1 + snc;
	}
	
	printf("%d",bsilk);
	
	printf("\ntoplam = %d",sonuc1);
}
