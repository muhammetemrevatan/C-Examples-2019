/* SORU 4) Bir integer X sayýsýný parametre olarak alan ve bu sayý asal ise ekrana “X sayýsý asal sayýdýr”, deðilse “X sayýsý asal sayý deðildir” yazdýran metodu yazýnýz. */

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
