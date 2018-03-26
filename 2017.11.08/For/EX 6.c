#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
				system("color 4A");
				
		float a, b, c;	
		int I;		
for(I=1;I<=10;I++){
	printf("CONTADOR: %d\n", I);				
	printf("Digite o valor para A: ");
	scanf("%f", &a);
	printf("Digite o valor para B: ");
	scanf("%f", &b);
	printf("Digite o valor para C: ");
	scanf("%f", &c);

	if(a == b && b == c && c == a){
		puts("EQUILÁTERO");
	}
	else{
		if(a == b || b == c || c == a){
             puts("ISOSCELES");
			 	}
		else {
			if(a != b && b != c && c != a){
				puts("ESCALENO");
			}
			else {
				puts("Não sei... nunca nem vi");
			}
		}
}
puts("");
}
return(0);
system("PAUSE");
}
