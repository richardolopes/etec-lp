#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("color 1F");
	int idade, I;
	
for(I=1;I<=5;I++){
	printf("CONTADOR: %d\n", I);
	printf("Digite a sua idade: ");
	scanf("%d", &idade);	
	
	switch(idade){
	
		case 5: puts("INFANTIL A"); break;
		case 6: puts("INFANTIL A"); break;
		case 7: puts("INFANTIL A"); break;
		
		case 8: puts("INFANTIL B"); break;
		case 9: puts("INFANTIL B"); break;
		case 10: puts("INFANTIL B"); break;
		
		case 11: puts("JUVENIL A"); break;
		case 12: puts("JUVENIL A"); break;
		case 13: puts("JUVENIL A"); break;
		
		case 14: puts("JUVENIL B"); break;
		case 15: puts("JUVENIL B"); break;
		case 16: puts("JUVENIL B"); break;
		case 17: puts("JUVENIL B"); break;
	}
	if(idade>=18){
		puts("SENIOR");
	}
	puts("");
}
	return(0);
	system("PAUSE");
}
