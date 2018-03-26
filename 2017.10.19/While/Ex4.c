#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1B");
	float alt, pi;
	int contador=1, resp;
	
while(contador<=15){
  printf("DIGITE A ALTURA DA %dª PESSOA: ", contador);
    scanf("%f", &alt);
	puts("DIGITE 1 - PARA MASCULINO E\n       2 - PARA FEMININO");
	scanf("%d", &resp);
	puts("");
	
while(resp != 1 && resp != 2){
			puts("Nunca nem vi.");
			puts("Resposta inválida.");
			puts("DIGITE 1 - PARA MASCULINO E\n       2 - PARA FEMININO");
			scanf("%d", &resp);
		}
		
		if(resp==1){
			pi = (72.7*alt)-58;
			printf("O PESO IDEAL É: %.2f\n\n", pi);
			contador = contador + 1;
		}
		if(resp==2){
			pi = (62.1*alt)-44.7;
			printf("O PESO IDEAL É: %.2f\n\n", pi);
			contador = contador + 1;
		}
		
}
	system("PAUSE");
	return(0);
}
