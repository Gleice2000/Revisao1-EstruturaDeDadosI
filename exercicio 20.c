//Escreva uma fun��o que verifique se uma fila encadeada que cont�m n�meros inteiros est� em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int filaCrescente(tfila f){
	int contador= 0;
	while(f.inicio!=NULL){ // se a fila no inicio for diferente de nulo
		if(contador < f.inicio->dado.numero){
			
			contador = f.inicio->dado.numero;
			f.inicio = f.inicio->proximo;
			
		}
		else
		{
			printf("A fila n�o est� em ordem crescente!");
			return 0;
		}
	}
}
