/*SORU 7) Pointer kullanarak bir stringdeki (karakter dizisindeki) bo�luklar�n say�s�n� hesaplayan ve ekrana yazd�ran program� yaz�n�z. */

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
