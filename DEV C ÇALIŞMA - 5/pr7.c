/*SORU 8) Pointer kullanarak bir dizinin elemanlar�n�n karelerinin toplam�n� hesaplayan ve ekrana yazd�ran program� yaz�n�z.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int array [3] = {1,2,3};
	int *p;
	
	p = &array[0];
	
	int i,result=1,sum=0;
	for(i=0; i<=2; i++)
	{
		result = *p * *p;
		sum += result;
		printf("%d\n",result);
		p++;
	}
	printf("%d",sum);
	
}	

