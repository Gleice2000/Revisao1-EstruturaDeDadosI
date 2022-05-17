//Crie uma função para mostrar a quantidade de elementos da fila.

#include <stdio.h>
#include <stdlib.h>

void mostrarFila(struct Fila *f)
{
	int contador, l;

	for(contador=0, l = f->primeiro; contador < f->nItens; contador++){

		printf("%.2f\t",f->dados[l++]);

		if (l == f->capacidade)
			l=0;

	}
}
