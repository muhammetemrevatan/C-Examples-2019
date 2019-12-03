//kullanýcýdan ay numarasýný girmesini isteyen (1-12 aralýgýnda) girilen ay numarasýna göre mevsimi konsola yazdýran program

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ayno;
	printf("Ay Numarasi giriniz (1-12 araliginda) : ");
	scanf("%d",&ayno);
	
	switch(ayno)
	{
		case 1:
			printf("Ocak");
			break;
		case 2:
			printf("Þubat");
			break;
		default:
			printf("geçerli ay no giriniz");
			break;
	}
}
