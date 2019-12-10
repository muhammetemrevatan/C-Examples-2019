/* SORU 3) Üç integer sayıyı parametre olarak alan ve bu sayılardan en küçük olanını return eden fonksiyonu yazınız */
int enkucukhesapla(int a,int b,int c)
{
	if(a<b && a<c)
	{
		return a;
	}
	else if(b<a && b<c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main(void)
{
	int hesap;
	hesap = enkucukhesapla(4,2,9);
	printf("%d",hesap);
}

