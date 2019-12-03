/* SORU 13) Bir integer N deðerini kullanýcýdan girmesini isteyen ve Fibonacci serisinin ilk N terimini ekrana yazdýran programý yazýnýz. */

#include <stdio.h>
#include <conio.h>

main(void)
{
	int n,s1,s2,sd;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	s1=1;
	s2=1;
	printf("%d \n%d\n",s1,s2);
	
	int i;
	for(i=1; i<=n-2; i++)
	{
		sd = s1+s2;
		s1=s2;
		s2=sd;
		printf("%d\n",sd);
	}
}
