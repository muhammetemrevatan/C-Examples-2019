/* Kullan�c�dan vize final ve proje notunu girmesini isteyen, daha sonra girilen notlar� a�a��daki form�le g�re
a��rl�kl� ortalamas�n� hesaplay�p, e�er ��renci 50 ve �zeri not ortalamas�na sahip olursa konsola "GECTI" 
50'nin alt�nda ortalamas� olursa ekrana "KALDI" yazan program� yaz�n�z.

A��rl�l� Ortalama = 0,3*vize + 0,2*proje + 0,5*final */
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
