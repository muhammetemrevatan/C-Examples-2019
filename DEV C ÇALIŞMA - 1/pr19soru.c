
/* SORU 19) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn rakamlarýnýn toplamýný hesaplayarak sonucu ekrana yazdýran programý yazýnýz.  */
	// 10 ile bölümünden kalan 1 ler basamagýný verir. 1234 % 10 == 4 yani bir ler basamagý
	// 100 ile bmlümünden kalan 1234 % 100 == 34 tür. 34-4 = 30 / 10 = 3 bu da onlar basamagýný bulmanýn formülü..
	//1000 ile bölümünden kalan  1234 % 1000 == 234 - 34 = 200 /100 = 2 buda yüzler basamagý formülü
	//1000 ile bölümü 1234/1000 = 1 dir buda binler basamagý
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
	bs1 = n % 10; // birler basamagý yani son basamak
	for(i=1; i<bs; i++)
	{
		son = son *10;
	}
	bsilk = n / son; // sayinin ilk basamagý
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
