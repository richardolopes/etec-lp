#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1A");
	
	int cont = 1;
	float kg, res;
	
	do {
		printf("\n%dº PESCADOR\n", cont);
		puts("QUATOS KG DE PEIXE:");
		scanf("%f", &kg);
		
		res = (kg - 50) * 4;
		
		if(kg>50){
			printf("O PESCADOR DEVE PAGAR: %.2f\n\n", res);
		}
		else{
			puts("O PESCADOR NÃO DEVE PAGAR MULTA")
		}

		cont = cont + 1;
		
	
	} while(cont<=5);

	system("PAUSE");
	return(0);
}
