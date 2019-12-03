/* Kullanýcýdan vize final ve proje notunu girmesini isteyen, daha sonra girilen notlarý aþaðýdaki formüle göre
aðýrlýklý ortalamasýný hesaplayýp, eðer öðrenci 50 ve üzeri not ortalamasýna sahip olursa konsola "GECTI" 
50'nin altýnda ortalamasý olursa ekrana "KALDI" yazan programý yazýnýz.

Aðýrlýlý Ortalama = 0,3*vize + 0,2*proje + 0,5*final */
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int vize,final,proje,ort;
	
	printf("Vize notunuzu giriniz : ");
	scanf("%d",&vize);
	
	printf("Proje notunuzu giriniz : ");
	scanf("%d",&proje);
	
	printf("Final notunuzu giriniz : ");
	scanf("%d",&final);
	
	ort = (0.3*vize) + (0.2*proje) + (0.5*final);
	printf("Agirlikli ortalamaniz : %d ",ort);
	
}
