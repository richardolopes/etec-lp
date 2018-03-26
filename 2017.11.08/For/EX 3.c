#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1C");

float h, r, resultado, pi=3.14;
int I;

for(I=1;I<=5;I++){
	printf("CONTADOR: %d\n", I);
	printf("Qual a altura da lata? ");
	scanf("%f", &h);
	printf("Qual o raio da lata? ");
	scanf("%f", &r);
	
	resultado = 2*pi*r*h;

	printf("A área externa da lata é: %f\n\n", resultado);

}

}
