/*SORU 7) Pointer kullanarak bir stringdeki (karakter dizisindeki) boþluklarýn sayýsýný hesaplayan ve ekrana yazdýran programý yazýnýz. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	char name[50] = "muhammet emre vatan";
	char *p;
	
	p = &name[0];
	
	int i,space=0;
	for(i=0; i<=sizeof(name); i++)
	{
		if(*p == ' ')
		{
			space+=1;
		}
		p++;
	}
	printf("%d",space);
	
	
}
