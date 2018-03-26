#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 4B");

float nota1, nota2, nota3, nota4, resultado;
int I;

for(I=1;I<=4;I++){
	printf("CONTADOR: %d\n", I);
	
	printf("Digite a 1ª nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2ª nota: ");
	scanf("%f", &nota2);
	printf("Digite a 3ª nota: ");
	scanf("%f", &nota3);
	printf("Digite a 4ª nota: ");
	scanf("%f", &nota4);
	
	resultado = (nota1 + nota2 + nota3 + nota4)/4;
	printf("Sua nota é: %f\n", resultado);
	
	if(resultado<2.5){
		puts("E - REPROVADO.");
	}
	else{
		if(resultado<5){
			puts("D - REPROVADO.");
		}
		else{
			if(resultado<7){
				puts("C - APROVADO.");
			}
			else{
				if(resultado<9){
					puts("B - APROVADO.");
				}
				else{
					if(resultado>=10){
						puts("A - APROVADO.");
					}
				}
			}
		}
	}
	puts("");
}

}
