/*SORU 7) Bir integer N de�erini parametre olarak alan ve Fibonacci serisinin ilk N terimini ekrana yazd�ran metodu yaz�n�z*/

#include <stdio.h>
#include <conio.h>

void fibo(int N)
{
	int s1=1,s2=1,deg;
	printf("%d %d ",s1,s2);
	
	int i;
	for(i=1; i<=N-2; i++)
	{
		deg = s1 + s2;
		s1=s2;
		s2=deg;
		printf("%d ",deg);
	}
}

main()
{
	fibo(8);
}
