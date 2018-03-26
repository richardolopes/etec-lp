#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1A");
	
	int dep, bonus, cont = 1;
	float salario_b, salario_l, valor_hr, hr_trab;
	
	do {
	printf("%dº FUNCIONARIO\n", cont);
	printf("Número de Dependentes: ");
	scanf("%d", &dep);
	printf("Valor Hora: ");
	scanf("%f", &valor_hr);
	printf("Hora Trabalhada: ");
	scanf("%f", &hr_trab);
	bonus = dep * 300 ;
	salario_b = valor_hr * hr_trab;
	salario_l = bonus + salario_b;
	printf("Valor do salario bruto : %0.2f\n", salario_b);
	printf("Valor do salario liquido : %0.2f\n\n", salario_l);
		
		cont = cont + 1;
	
	} 
	while(cont<=10);
	
	system("PAUSE");
	return(0);
}
