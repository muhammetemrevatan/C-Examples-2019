/* SORU 4) Bir integer X say�s�n� parametre olarak alan ve bu say� asal ise ekrana �X say�s� asal say�d�r�, de�ilse �X say�s� asal say� de�ildir� yazd�ran metodu yaz�n�z. */

void asalmi(int x)
{
	int i,sonuc;
	
	for(i=2; i<x; i++)
	{
		if(x % i == 0)
		{
			sonuc = 0;
			break;
		}
		else
		{
			sonuc = 1;
		}
	}
	
	if(sonuc == 1)
	{
		printf("asaldir.");
	}
	else
	{
		printf("asal degil.");
	}
}

int main(void)
{
	asalmi(111);
}
