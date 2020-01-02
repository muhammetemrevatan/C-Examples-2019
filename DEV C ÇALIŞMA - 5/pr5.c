/*SORU 5) Pointer kullanarak bir dizinin negatif elemanlarýnýn toplamýný bulan ve ekrana yazdýran programý yazýnýz.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array [5] = {-1,1,8,-8,-3};
	int *p;
	
	p = &array[0];
	s
	int i,sum=0;
	for(i=0; i<=4; i++)
	{
		if(*p < 0)
		{
			sum+=*p;
		}
		p++;
	}
	printf("%d",sum);
}
