/*SORU 1) Bir integer dizisinin elemanlarının toplamını hesaplayan bir program yazınız. 
(NOT: Bu soruda ve diğer sorularda yazdığınız programları test etmek için gerekli dizi(leri) kendiniz tanımlayabilir, dizi elemanlarının değerlerini kendiniz atayabilir veya kullanıcıdan girmesini isteyebilirsiniz.) */

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
