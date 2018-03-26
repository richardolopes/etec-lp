#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1C");
	float a, b, h;
	int contador;
	puts("QUAL O VALOR DA BASE:");
	scanf("%f", &b);
	puts("QUAL O VALOR DA ALTURA:");
	scanf("%f", &h);
	
	contador = 1;
	
	while(contador <= 10){
		a = b*h;
		printf("Valor atual de B: %.0f\n", b);
		printf("Valor atual de H: %.0f\n", h);
		printf("%dº resultado:  %f\n\n", contador, a);
		b = b + 2;
		contador = contador + 1;
	}
	
	puts("\n\nO VALOR B RECEBEU +2 A CADA RESULTADO.\n\n");
	
	system("PAUSE");
	return(0);
}
