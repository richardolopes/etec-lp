#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1A");
	
	int cont = 1, ano_nasc, ano_atual, res;
	
	puts("ANO ATUAL:");
	scanf("%d", &ano_atual);
	
	do {
		
		puts("ANO DE NASCIMENTO:");
		scanf("%d", &ano_nasc);
		
		res = ano_atual - ano_nasc;
		cont = cont + 1;
		
		if(res>=18){
			puts("VOC� J� PODE SER PRESO.");
		}
		else {
			puts("VOC� AINDA N�O PODE SER PRESO.");
		}
		
		if(cont != 16){	printf("\n%d� PESSOA\n", cont);}
	
	} while(cont<=15);
	
	

	system("PAUSE");
	return(0);
}
