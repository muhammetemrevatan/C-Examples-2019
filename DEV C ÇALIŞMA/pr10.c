/*Soru 10) Kullan�c�dan m��teri grubunu girmesini isteyen (A, B, C), daha sonra al��veri� tutar�n� soran,
 m��teri grubuna ve tutar�na g�re a�a��daki indirimi uygulay�p m��terinin �demesi gereken tutar�
  a) switch-case yap�s�n� 
  b) if-else yap�s�n� kullanarak yap�n�z 
� A tipi i�in 0-100 %5, 100-500 %10, 500 �zeri %15 

� B tipi i�in 0-100 %7.5, 100-500 %12.5, 500 �zeri %17.5 
� C tipi i�in 0-100 %10, 100-500 %15, 500 ve �zeri %20  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int tutar,sonuc;
	char grp;
	printf("musteri grubunu giriniz ('A-B-C') : ");
	scanf("%c",&grp);
	printf("alisveris tutarini giriniz : ");
	scanf("%d",&tutar);
	
	if(grp == 'A')
	{
		if(tutar>=0 && tutar<=99)
		{
			sonuc = tutar-(tutar*5/100);
			printf("tutar : %d",sonuc);
		}
		else if(tutar>=100 && tutar<=499)
		{
			sonuc = tutar-(tutar*10/100);
			printf("tutar : %d",sonuc);
		}
		else if(tutar>=500)
		{
			sonuc = tutar-(tutar*15/100);
			printf("tutar : %d",sonuc);
		}
		else
		{
			printf("yanlis tutar girdiniz..");
		}
	}
	else if(grp == 'B')
	{
		if(tutar>=0 && tutar<=99)
		{
			sonuc = tutar-(tutar*7.5/100);
			printf("tutar : %d",sonuc);
		}
		else if(tutar>=100 && tutar<=499)
		{
			sonuc = tutar-(tutar*12.5/100);
			printf("tutar : %d",sonuc);
		}
		else if(tutar>=500)
		{
			sonuc = tutar-(tutar*17.5/100);
			printf("tutar : %d",sonuc);
		}
		else
		{
			printf("yanlis tutar girdiniz..");
		}
	}
	else if(grp== 'C')
	{
		if(tutar>=0 && tutar<=99)
		{
			sonuc = tutar-(tutar*10/100);
			printf("tutar : %d",sonuc);
		}
		else if(tutar>=100 && tutar<=499)
		{
			sonuc = tutar-(tutar*15/100);
			printf("tutar : %d",sonuc);
		}
		else if(tutar>=500)
		{
			sonuc = tutar-(tutar*20/100);
			printf("tutar : %d",sonuc);
		}
		else
		{
			printf("yanlis tutar girdiniz..");
		}
	}
	else
	{
		printf("yanlis tutar girdiniz..");
	}
}
