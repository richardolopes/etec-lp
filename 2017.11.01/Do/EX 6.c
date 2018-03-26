#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1A");
	
	int cont = 1, lanche, cont_lan;

	puts("ESCOLHA UMA DAS OPÇÕES:\n");
	puts("1 - BigMac\n");
	puts("2 - Quarteirão\n");
	puts("3 - MacChicken\n");
	puts("4 - Cheddar MacMelt\n");
	puts("5 - MacMax\n");
	printf("--> ");
		
	do {
		scanf("%d", &lanche);
		
		switch(lanche){
		case 1: puts("\nVocê escolheu o BigMac\n"); break;
		case 2: puts("\nVocê escolheu o Quarteirão\n"); break;
		case 3: puts("\nVocê escolheu o MacChicken\n"); break;
		case 4: puts("\nVocê escolheu o Cheddar MacMelt\n"); break;
		case 5: puts("\nVocê escolheu o MacMax\n"); break;
		default : 
		puts("RESPOSTA INVALIDA\n");
		puts("OPÇÕES DISPONIVEIS:\n");
		puts("1 - BigMac\n");
		puts("2 - Quarteirão\n");
		puts("3 - MacChicken\n");
		puts("4 - Cheddar MacMelt\n");
		puts("5 - MacMax\n");
		break;
	}
	
		puts("DESEJA ACRESCENTAR MAIS ALGUM LANCHE?");
		puts("DIGITE - 1 PARA SIM E 2 PARA NAO.");
		scanf("%d", &cont_lan);
		
		if(cont_lan==1){			
			puts("ESCOLHA UMA DAS OPÇÕES:\n");
			puts("1 - BigMac\n");
			puts("2 - Quarteirão\n");
			puts("3 - MacChicken\n");
			puts("4 - Cheddar MacMelt\n");
			puts("5 - MacMax\n");
			printf("--> ");
			cont = 2;
		}
		else {
			cont = 1;
		}
		
	} while(cont==2);

	system("PAUSE");
	return(0);
}
