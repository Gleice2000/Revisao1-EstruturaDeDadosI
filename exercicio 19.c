//Utilizando uma pilha crie um programa que converta um numero decimal em qualquer base de 2 a 8.

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaPilha.h"

int main(){
	int dec, base;
	tpilha p;
	inicializa(&p);
	printf("Valor em decimal e a base (2-8):");
	scanf("%d%d",&dec,&base);
	while(dec>0){
		push(&p,dec%base);
		dec = dec /base; 
	}
	printf("Conversao: ");
	mostraPilha(p);
	return 0;
}
