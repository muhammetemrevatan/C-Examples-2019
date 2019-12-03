/* SORU 11) Bir integer N deðerini kullanýcýdan girmesini isteyen ve 1'den N'ye kadar olan sayýlarý toplayýp sonucu ekrana yazdýran programý yazýnýz */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,top;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n);
	
	int i;
	for(i=1; i<=n; i++)
	{
		top=top+i;
		
	}
	printf("%d",top);
}
