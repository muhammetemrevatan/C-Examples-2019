/*SORU 5) �ki integer say�y� parametre olarak alan ve bu iki say� aras�ndaki t�m say�lar� k���kten b�y��e do�ru ekrana yazd�ran metodu yaz�n�z. */

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
