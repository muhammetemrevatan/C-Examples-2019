/*SORU 9) Ýki integer parametre alan ve bu iki deðiþkenin deðerini kalýcý olarak birbiriyle deðiþtiren fonksiyonu yazýnýz.
 (Bu fonksiyon çaðýrýldýktan sonra, main'de deðiþkenlerin deðerlerleri deðiþmiþ olarak kalmalýdýr.)*/
 
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
