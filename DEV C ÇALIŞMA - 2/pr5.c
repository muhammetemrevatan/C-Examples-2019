/*SORU 5) Ýki integer sayýyý parametre olarak alan ve bu iki sayý arasýndaki tüm sayýlarý küçükten büyüðe doðru ekrana yazdýran metodu yazýnýz. */

void kb(int a,int b)
{
	if(a < b)
	{
		int i;
		for(i=a+1; i<b; i++)
		{
			printf("%d ",i);
		}
	}
	else if(b < a)
	{
		int j;
		for(j=b+1; j<a; j++)
		{
			printf("%d ",j);
		}
	}
	else
	{
		printf("sayilar esittir.");
	}
}

int main(void)
{
	kb(5,2);
}
