/*SORU 6) Pointer kullanarak bir dizinin pozitif elemanlar�n�n en k�����n� bulan ve ekrana yazd�ran program� yaz�n�z*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array [6] = {-1,2,8,-8,3,-3};
	int *p;
	
	p = &array[0];

	int i,result=100;
	for(i=0; i<=4; i++)
	{
		if(*p > 0)
		{
			if(result > *p)
			{
				result = *p;
			}
		}
		p++;
	}
	printf("%d",result);
}	

