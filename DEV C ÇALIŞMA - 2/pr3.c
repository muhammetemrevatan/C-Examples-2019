/* SORU 3) �� integer say�y� parametre olarak alan ve bu say�lardan en k���k olan�n� return eden fonksiyonu yaz�n�z */
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

