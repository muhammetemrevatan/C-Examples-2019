/*SORU 10) Bir diziyi parametre olarak alan ve bu dizinin elemanlarını pointer kullanarak terse çeviren fonksiyonu yazınız. 
(Bu fonksiyonda herhangi bir return olmamalıdır, terse çevirme işlemi orijinal dizi üzerinde yapılmalıdır.) */


#include <stdio.h>
#include <conio.h>

int fonk(int array[5],int size)
{
	int *p2;
	
	int i;
	for(i=size-1; i>=0; i--)
	{
		p2 = &array[i];
		
		printf("%d",*p2);
		
		p2--;
	}	
	
}

int main()
{
	int dizi[5] = {1,2,3,4,5};
	
	fonk(dizi,5);
	
	printf("\n\n%p %p\n", dizi, &dizi[0]); // dizi bize dizinin ilk adresinigösterir...
	
	printf("\n %d",dizi[0]);
}
