/*SORU 7) Bir integer N deðerini parametre olarak alan ve Fibonacci serisinin ilk N terimini ekrana yazdýran metodu yazýnýz*/

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
