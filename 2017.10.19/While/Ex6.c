#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("color 4B");
	float peso, alt, imc;
	int contador, pessoas;
	puts("QUANTAS PESSOAS IRÁ CALCULAR O IMC? ");
	scanf("%d", &pessoas);

while(contador<=pessoas){

	printf("Digite sua altura:\n");
	scanf("%f", &alt);
	printf("Digite seu peso:\n");
	scanf("%f", &peso);

imc = (peso/(alt*alt));
	
	printf("Seu IMC é: %f \n", imc);
	contador = contador + 1;
	if(imc<18){
		puts("MAGREZA");
	}
	else{
		if(imc<24.9){
			puts("SAUDAVEL");
		}
		else {
			if(imc<29.9){
				puts("SOBREPESO");
			}
			else {
				if(imc>=30){
					puts("OBESIDADE");
				}
			}
		}
	}
	}
}
