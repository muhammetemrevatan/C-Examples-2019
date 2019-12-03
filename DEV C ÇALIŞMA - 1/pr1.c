//kullanýcýdan 0-100 aralýðýnda notunu girmesini isteyin ve aþaðýdaki aralaýklara göre harf notunu konsola yazdýran programý yazýn..

/*
85-100 A
70-85  B
55-70  C
40-55  D
0-40   F
*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int not;
	printf("0-100 araligindaki notunuzu giriniz : ");
	scanf("%d",&not);
	if(not>=85&& not<=100)
	{
		printf("Notunuz : %d Harf notunuz : A ",not);
	}
	else if(not>=70 && not<=84)
	{
		printf("Notunuz : %d Harf notunuz : B ",not);
	}
	else if(not>=55 && not<=69)
	{
		printf("Notunuz : %d Harf notunuz : C ",not);
	}
	else if(not>=40 && not<=54)
	{
		printf("Notunuz : %d Harf notunuz : D ",not);
	}
	else if(not>=0 && not<=39)
	{
		printf("Notunuz : %d Harf notunuz : F ",not);
	}
	else
	{
		printf("0-100 araliginda bir sayi giriniz..");
	}
}
