/* SORU 2) Bir integer yarýçap deðerini parametre olarak alan ve bu yarýçapa sahip olan dairenin çevresini ve alanýný ekrana yazdýran metodu yazýnýz. */

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
