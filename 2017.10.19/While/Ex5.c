#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1B");

	char senha[5];	
	int cont;
	
	puts("DIGITE SUA SENHA:");
	scanf("%s", &senha);
	
	while(cont<3){
		if(strcmp(senha,"asdfg")==0){
			puts("SENHA VÁLIDA.");
			cont = cont + 3;
		}
		else{
			puts("SENHA INCORRETA.");
			puts("DIGITE A SENHA NOVAMENTE:");
			scanf("%s", &senha);
				if(strcmp(senha,"asdfg")==0){
				puts("SENHA VÁLIDA.");
				cont = cont + 3;
				}
			cont = cont + 1;
		}
	}
	
	system("PAUSE");
	return(0);
}

