#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1E");

	float r, pi=3.14, resultado;
	int I;

for(I=1;I<=10;I++){
	printf("CONTADOR: %d\n", I);
	printf("Qual o raio da esfera? ");
	scanf("%f", &r);
	
	resultado = 4*pi*r*r*r/3;

	printf("O volume da esfera é: %.2f cm³\n\n", resultado);


}
}
