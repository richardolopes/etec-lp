#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 3B");

float a, b, c, x1, x2, delta, raiz;
int I;
for(I=1;I<=5;I++){
	printf("CONTADOR: %d\n\n", I);
	printf("Qual o valor de A? ");
	scanf("%f", &a);
	printf("Qual o valor de B? ");
	scanf("%f", &b);
	printf("Qual o valor de C? ");
	scanf("%f", &c);
	
	delta = b*b-4*a*c;
	raiz = sqrt(delta);
	x1 = (-b+raiz)/2*a;
	x2 = (-b-raiz)/2*a;
	 
	if(raiz>=0){
	printf("O valor de X1 %.2f\n", x1);
	printf("O valor de X2 %.2f\n\n", x2);	
	}
	else {
	puts("Delta não possui raiz real \n");
	}

}	
}
