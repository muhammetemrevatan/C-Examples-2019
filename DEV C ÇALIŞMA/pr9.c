/* SORU 9) Kullan�c�dan ��genin �� kenar uzunlu�unu girmesini isteyen, t�m kenar uzunluklar� birbirine e�itse konsola
 "E�KENAR ��GEN", sadece iki kenar uzunlu�u birbirine e�itse "�K�ZKENAR ��GEN", 
�� kenar uzunlu�u da birbirinden farkl�ysa "�E��TKENAR ��GEN" yazd�ran program� yaz�n�z. */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int k1,k2,k3;
	printf("1. kenari giriniz : ");
	scanf("%d",&k1);
	printf("2. kenari giriniz : ");
	scanf("%d",&k2);
	printf("3. kenari giriniz : ");
	scanf("%d",&k3);
	
	if (k1==k2 && k2==k3)
	{
		printf("ESKENAR UCGEN");
	}
	else if(k1==k2 || k2==k3 || k1==k3)
	{
		printf("ikizkenar ucgen");
	}
	else if(k1!=k2 && k2!=k3 && k1!=k3)
	{
		printf("cesitkenar ucgen");
	}
	else
	{
		printf("tan�ms�z");
	}
}
