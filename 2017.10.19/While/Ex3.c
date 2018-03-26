#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1A");
	float nota1, nota2, nota3, nota4, media;
	int contador, rm;
	
	contador = 1;
	
	while(contador <= 7){
		printf("DIGITE O RM DO %dº ALUNO: ", contador);
		scanf("%d", &rm);
		
		printf("DIGITE A 1ª NOTA DO ALUNO: ");
		scanf("%f", &nota1);
		printf("DIGITE A 2ª NOTA DO ALUNO: ");
		scanf("%f", &nota2);
		printf("DIGITE A 3ª NOTA DO ALUNO: ");
		scanf("%f", &nota3);
		printf("DIGITE A 4ª NOTA DO ALUNO: ");
		scanf("%f", &nota4);
		puts("------------------------------");
		media = (nota1 + nota2 + nota3 + nota4) / 4;
		printf("A MÉDIA DO ALUNO %d FOI DE: %.2f", rm, media);
		contador = contador + 1;
	}
	
	system("PAUSE");
	return(0);
}
