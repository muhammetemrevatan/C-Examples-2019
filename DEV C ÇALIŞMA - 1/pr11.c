/* SORU 11) Bir integer N de�erini kullan�c�dan girmesini isteyen ve 1'den N'ye kadar olan say�lar� toplay�p sonucu ekrana yazd�ran program� yaz�n�z */

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
