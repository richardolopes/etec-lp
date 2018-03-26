#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1A");
	
	float base, alt, res;
	int cont = 1;
	
	do {
		printf("%dº TRIANGULO\n", cont);
		puts("QUAL O TAMANHO DA BASE ?");
		scanf("%f", &base);
		puts("QUAL O TAMANHO DA ALTURA ?");
		scanf("%f", &alt);
		
		res = base*alt/2;
		
		cont = cont + 1;
		
		printf("A ÁREA DO TRIANGULO É DE: %f\n\n", res);
		if(cont != 9){}
	
	} while(cont<=8);
	
	

	system("PAUSE");
	return(0);
}
