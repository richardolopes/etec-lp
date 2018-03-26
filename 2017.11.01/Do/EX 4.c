#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		setlocale(LC_ALL, "Portuguese");
		system("COLOR 1A");
	
	int cont = 1;
	float m_cm, m_m, m_mm, m_dm;
	
	do {
		printf("\n%dª MEDIDA\n", cont);
		puts("DIGITE UMA MEDIDA EM CM:");
		scanf("%f", &m_cm);
		
		m_mm = m_cm * 10;
		m_dm = m_cm / 10;
		m_m = m_cm / 100; 
		
		printf(" A MEDIDA EM METROS: %.2f \n A MEDIDA EM DECIMETROS: %.2f \n A MEDIDA EM MILIMETROS: %.2f \n", m_m, m_dm, m_mm);
		
		cont = cont + 1;
		
	
	} while(cont<=10);

	system("PAUSE");
	return(0);
}
