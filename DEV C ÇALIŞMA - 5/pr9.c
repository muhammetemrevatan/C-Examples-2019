/*SORU 9) �ki integer parametre alan ve bu iki de�i�kenin de�erini kal�c� olarak birbiriyle de�i�tiren fonksiyonu yaz�n�z.
 (Bu fonksiyon �a��r�ld�ktan sonra, main'de de�i�kenlerin de�erlerleri de�i�mi� olarak kalmal�d�r.)*/
 
 #include <stdio.h>
 #include <conio.h>
 
 int fonk(int a ,int b)
 {
 	int *p1, *p2;
 	
 	p1 = &a;
 	p2 = &b;
 	
 	printf("a = %d , b = %d",*p2,*p1);
 }
 
 int main()
 {
 	fonk(5,10);
 	printf("%d",a);
 }
