/* SORU 2) Bir integer yar��ap de�erini parametre olarak alan ve bu yar��apa sahip olan dairenin �evresini ve alan�n� ekrana yazd�ran metodu yaz�n�z. */

#include <stdio.h>
#include <conio.h>

const float pi = 3.14;

void cevre_alan_bul(float r)
{
	float alan,cevre;
	alan = pi*r*r;
	cevre = 2*pi*r;
	printf("alan = %f , cevre = %f",alan,cevre);
}

main(void)
{
	cevre_alan_bul(3);
}
