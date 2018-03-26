#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1E");
	float contador, dep;
	int mes, qntmes;
	puts("QUAL O VALOR DO DEPOSITO:");
	scanf("%f", &dep);
	puts("QUANTIDADE DE MESES:");
	scanf("%d", &mes);
	
	qntmes = 1;
	contador = 1;
	
	while(contador <= mes){
		dep = (0.01*dep)+dep;
		printf("%dº mês:  %f\n", qntmes, dep);
		contador = contador + 1;
		qntmes = qntmes + 1;
	}
	
	system("PAUSE");
	return(0);
}
