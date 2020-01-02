/*SORU 4) Pointer kullanarak bir dizinin ortalamasýný hesaplayan ve ekrana yazdýran programý yazýnýz. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dizi[5] = {1,2,3,4,5};
	
	int *p;
	
	p = &dizi[0];
	
	int i;
	for(i=0; i<=4; i++)
	{
		printf("%d\n",*p);
		p = p + 1;
	}
	
}
