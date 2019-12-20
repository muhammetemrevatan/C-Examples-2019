/*SORU 13) Bir integer N deðerini parametre olarak alan ve 1’den N’ye kadar 
3’e tam bölünebilen sayýlarýn toplamýný recursive olarak hesaplayarak return eden fonksiyonu yazýnýz*/

#include <stdio.h>
#include <conio.h>

int fonk(int n)
{
	
    if(n % 3 == 0)
        return (n+fonk(n-1));
    
}
int main(void)
{
	int a;
	a = fonk(9);
	printf("%d",a);
}

