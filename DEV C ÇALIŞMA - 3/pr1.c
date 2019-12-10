/*SORU 1) Bir integer dizisinin elemanlarýnýn toplamýný hesaplayan bir program yazýnýz. 
(NOT: Bu soruda ve diðer sorularda yazdýðýnýz programlarý test etmek için gerekli dizi(leri) kendiniz tanýmlayabilir, dizi elemanlarýnýn deðerlerini kendiniz atayabilir veya kullanýcýdan girmesini isteyebilirsiniz.) */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a = 3;
	int dizi[3] = {1,3,3};
	
	int i,top=0;
	for(i=0; i<a; i++)
	{
		top=top+dizi[i];
		
	}
	printf("%d",top);
	
}
