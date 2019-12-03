/* SORU 19) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn rakamlarýnýn toplamýný hesaplayarak sonucu ekrana yazdýran programý yazýnýz.  */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n,a=1,deger=0,islem;
	printf("bir n degeri giriniz : ");
	scanf("%d",&n); 
	
	// 10 ile bölümünden kalan 1 ler basamagýný verir. 1234 % 10 == 4 yani bir ler basamagý
	// 100 ile bmlümünden kalan 1234 % 100 == 34 tür. 34-4 = 30 / 10 = 3 bu da onlar basamagýný bulmanýn formülü..
	//1000 ile bölümünden kalan  1234 % 1000 == 234 - 34 = 200 /100 = 2 buda yüzler basamagý formülü
	//1000 ile bölümü 1234/1000 = 1 dir buda binler basamagý
	
	
		
}
