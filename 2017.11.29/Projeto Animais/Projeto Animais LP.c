#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 0b");
int rp, rp1, rp2, rp3, rp4, rp5, rp6, OI, JN;
for(JN=1;JN<=2;){
for(OI=1;OI<=7;OI++){
if(OI == 1) { 
	puts("    EU VOU ADIVINHAR O ANIMAL QUE VOCE ESCOLHER !        "); }
	puts(" _______________________________________________________ ");
	puts("|                                                       |");
	puts("|         Leão             |          Cavalo            |");
	puts("|         Homem            |          Macaco            |");
	puts("|         Morcego          |          Baleia            |");
	puts("|         Avestruz         |          Pinguim           |");
	puts("|         Pato             |          Águia             |");
	puts("|         Tartaruga        |          Crocodilo         |");
	puts("|         Cobra            |     99 - CANCELAR          |");
	puts("|_______________________________________________________|");
	puts("|                                                       |");
	puts("|  Desenvolvido por: Richard Lopes e Gustavo Rodrigues  |");
	puts("|_______________________________________________________|");
if(OI == 1) {
	puts(" ESCOLHA APENAS UM DOS ANIMAIS ACIMA E RESPONDA AS PERGUNTAS.");
	puts(" PODEMOS COMEÇAR?");
	puts(" DIGITE 1 - PARA SIM | 2 - PARA NAO");
	printf(" --> ");
	scanf("%d", &rp);
		while(rp != 1 && rp != 2 && rp != 99){
			puts(" NÚMERO INVÁLIDO");
			puts(" DIGITE NOVAMENTE");
			printf(" --> ");
			scanf("%d", &rp);
		}
	if(rp == 2 || rp == 99){
		JN = JN + 9;
		OI = OI + 9;
	} //FIM DO INICIO DO JOGO
	system("CLS");
} // FIM DA INICIO DO JOGO 
if(OI == 2){
	system("COLOR 0C");
		puts(" É Mamífero?");
		puts(" DIGITE 1 - PARA SIM | DIGITE 2 - PARA NAO");
		printf(" --> ");
		scanf("%d", &rp1);
			while(rp1 != 1 && rp1 != 2 && rp1 != 99){
				puts(" NÚMERO INVÁLIDO");
				puts(" DIGITE NOVAMENTE");
				printf(" --> ");
				scanf("%d", &rp1);
			}
		if(rp1 == 99){
			JN = JN + 9;
			OI = OI + 9;
		}
		system("CLS");
	}
	if(OI == 3){
		puts(" É Quadrúpede?");
		puts(" DIGITE 1 - PARA SIM | DIGITE 2 - PARA NAO");
		printf(" --> ");
		scanf("%d", &rp2);
			while(rp2 != 1 && rp2 != 2 && rp2 != 99){
				puts(" NÚMERO INVÁLIDO");
				puts(" DIGITE NOVAMENTE");
				printf(" --> ");
				scanf("%d", &rp2);
			}
		if(rp2 == 99){
			JN = JN + 9;
			OI = OI + 9;
		}
		system("CLS");
	}
	if(OI == 4){
		puts(" É Carnívoro?");
		puts(" DIGITE 1 - PARA SIM | DIGITE 2 - PARA NAO");
		printf(" --> ");
		scanf("%d", &rp3);
			while(rp3 != 1 && rp3 != 2 && rp3 != 99){
				puts(" NÚMERO INVÁLIDO");
				puts(" DIGITE NOVAMENTE");
				printf(" --> ");
				scanf("%d", &rp3);
			}
		if(rp3 == 99){
			JN = JN + 9;
			OI = OI + 9;
		}
		system("CLS");
	}
	if(OI == 5){
		puts(" É Herbívoro?");
		puts(" DIGITE 1 - PARA SIM | DIGITE 2 - PARA NAO");
		printf(" --> ");
		scanf("%d", &rp4);
			while(rp4 != 1 && rp4 != 2 && rp4 != 99){
				puts(" NÚMERO INVÁLIDO");
				puts(" DIGITE NOVAMENTE");
				printf(" --> ");
				scanf("%d", &rp4);
			}
		if(rp4 == 99){
			JN = JN + 9;
			OI = OI + 9;
		}
		system("CLS");
	}
	//PERGUNTA <=4
	if(rp1==1 && rp2==1 && rp3==1 && rp4==2){ puts("\n O animal escolhido é o Leão\n");      OI = OI + 9; }
	if(rp1==1 && rp2==2 && rp3==1 && rp4==2){ puts("\n O animal escolhido é a Baleia\n");    OI = OI + 9; }
	if(rp1==2 && rp2==1 && rp3==1 && rp4==1){ puts("\n O animal escolhido é a Tartaruga\n"); OI = OI + 9; }
	if(rp1==2 && rp2==1 && rp3==1 && rp4==2){ puts("\n O animal escolhido é o Crocodilo\n"); OI = OI + 9; }
	if(OI == 6){
		puts(" Algumas espécies deste animal consegue voar?");
		puts(" DIGITE 1 - PARA SIM | DIGITE 2 - PARA NAO");
		printf(" --> ");
		scanf("%d", &rp5);
			while(rp5 != 1 && rp5 != 2 && rp5 != 99){
				puts(" NÚMERO INVÁLIDO");
				puts(" DIGITE NOVAMENTE");
				printf(" --> ");
				scanf("%d", &rp5);
			}
		if(rp5 == 99){
			JN = JN + 9;
			OI = OI + 9;
		}
		system("CLS");
	}
	//PERGUNTA <=5
	if(rp1==1 && rp2==2 && rp3==1 && rp4==1 && rp5==2){ puts("\n O animal escolhido é o Homem\n");    OI = OI + 9; }
	if(rp1==1 && rp2==2 && rp3==1 && rp4==1 && rp5==1){ puts("\n O animal escolhido é o Morcego\n");  OI = OI + 9; } 
	if(rp1==2 && rp2==2 && rp3==1 && rp4==1 && rp5==2){ puts("\n O animal escolhido é o Avestruz\n"); OI = OI + 9; }
	if(rp1==2 && rp2==2 && rp3==1 && rp4==1 && rp5==1){ puts("\n O animal escolhido é o Pato\n");     OI = OI + 9; }
	if(rp1==2 && rp2==2 && rp3==1 && rp4==2 && rp5==1){ puts("\n O animal escolhido é a Águia\n");    OI = OI + 9; }
	if(OI == 7){
		puts(" Este animal consegue subir em arvores?");
		puts(" DIGITE 1 - PARA SIM | DIGITE 2 - PARA NAO");
		printf(" --> ");
		scanf("%d", &rp6);
			while(rp6 != 1 && rp6 != 2 && rp6 != 99){
				puts(" NÚMERO INVÁLIDO");
				puts(" DIGITE NOVAMENTE");
				printf(" --> ");
				scanf("%d", &rp6);
			}
		if(rp6 == 99){
			JN = JN + 9;
			OI = OI + 9;
		}
		system("CLS");
	}
	//PERGUNTA <=6
	if(rp1==2 && rp2==2 && rp3==1 && rp4==2 && rp5==2 && rp6==2){ puts("\n O animal escolhido é o Pinguim\n");OI = OI + 9; }
	if(rp1==2 && rp2==2 && rp3==1 && rp4==2 && rp5==2 && rp6==1){ puts("\n O animal escolhido é a Cobra\n");  OI = OI + 9; }
	if(rp1==1 && rp2==1 && rp3==2 && rp4==1 && rp5==2 && rp6==2){ puts("\n O animal escolhido é o Cavalo\n"); OI = OI + 9; }
	if(rp1==1 && rp2==1 && rp3==2 && rp4==1 && rp5==2 && rp6==1){ puts("\n O animal escolhido é o Macaco\n"); OI = OI + 9; }
} // FIM DO FOR
if(OI == 8) { puts("\n\n   NUNCA NEM VI.\n\n"); }
if(JN == 1){
puts(" DESEJA JOGAR NOVAMENTE ?");
puts(" DIGITE 1 - PARA SIM | DIGITE 2 - PARA NAO");
	printf(" --> ");
	scanf("%d", &JN);
		while(JN != 1 && JN != 2 && JN != 99){
			puts(" NÚMERO INVÁLIDO");
			puts(" DIGITE NOVAMENTE");
			printf(" --> ");
			scanf("%d", &JN);
		}
	if(JN==1){ JN = 1; rp1 = 0; rp2 = 0; rp3 = 0; rp4 = 0; rp5 = 0; rp6 = 0; rp = 0; system("CLS"); }
	if(JN==2 || JN==99){ JN = JN + 9; OI = OI + 9; system("CLS"); }
}
}
system("COLOR 0B");
puts("\n\n           ADEUS :(\n\n");
	system("PAUSE");
	return(0);
}
