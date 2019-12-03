/*Soru 10) Kullanýcýdan müþteri grubunu girmesini isteyen (A, B, C), daha sonra alýþveriþ tutarýný soran,
 müþteri grubuna ve tutarýna göre aþaðýdaki indirimi uygulayýp müþterinin ödemesi gereken tutarý
  a) switch-case yapýsýný 
  b) if-else yapýsýný kullanarak yapýnýz 
• A tipi için 0-100 %5, 100-500 %10, 500 üzeri %15 

• B tipi için 0-100 %7.5, 100-500 %12.5, 500 üzeri %17.5 
• C tipi için 0-100 %10, 100-500 %15, 500 ve üzeri %20  */

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
