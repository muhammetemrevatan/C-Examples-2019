#include <stdio.h>
#include <conio.h>


int fonk(int sayi)
{
	int toplam = 0;
	
	if(sayi>=7)
	{
		toplam = sayi + fonk(sayi-1);
	}
	return toplam;
}

// toplam=0		sayi 9 + 8
// toplam=17	sayi 8 + 7
// toplam=15	sayi 7 + 6


int main()
{
	int hesap;
	hesap = fonk(9);
	
	printf("%d",hesap);
}
