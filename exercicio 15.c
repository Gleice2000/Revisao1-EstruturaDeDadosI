//Crie uma função para verificar se um elemento existe em uma fila circular estática.

#include <stdio.h>

void mostra(tfila f){
 int l;	
	for(l=1;l<=f.qnt;l++){
		printf("%s:%d |", f.fila[f.inicio].nome, f.fila[f.inicio].idade);
		if(f.inicio == MAX-1)
		  f.inicio = 0;
		else  
		  f.inicio++;                 
	}
	
