/*Kullan�c�dan iki say� girmesini isteyen, daha sonra a�a��daki men�de oldu�u gibi yapmak istedi�i i�lemi soran, son olarak i�lemin
sonucu konsola yazd�ran program� yaz�n�z..
L�tfen yapmak istedi�iniz i�lem numaras�n� giriniz : 
1-TOPLAMA
2-�IKARMA
3-CARPMA
4-BOLME
5-MOD */
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int sayi1,sayi2,islem,sonuc;
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n5-Mod\n Lutfen yapmak istediginiz islem numarasini giriniz :  ");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1:
			sonuc = sayi1 + sayi2;
			break;
		case 2:
			sonuc = sayi1 - sayi2;
			break;
		case 3:
			sonuc = sayi1 * sayi2;
			break;
		case 4:
			sonuc = sayi1 / sayi2;
			break;
		case 5:
			sonuc = sayi1 % sayi2;
			break;
		default:
			printf("Hatali islem girdiniz.");
			break;
	}
	printf("%d",sonuc);
}
