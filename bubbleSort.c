#include <stdio.h>
#include "bubbleSort.h"

void swap(int *a, int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}

void comparar(int *valores, int comparadorAtual, int comparadorSeguinte, int tamanhoMaximo) {
	if(comparadorSeguinte == tamanhoMaximo) {
		return;
	} else {
		if(valores[comparadorAtual] > valores[comparadorSeguinte]) {
			swap(&valores[comparadorAtual], &valores[comparadorSeguinte]);
		}
		comparar(valores, comparadorAtual, comparadorSeguinte + 1, tamanhoMaximo);
	}
}

void sortear(int *valores, int comparadorAtual, int tamanhoMaximo) {
	if(comparadorAtual == tamanhoMaximo) {
		return;
	} else {
		comparar(valores, comparadorAtual, comparadorAtual + 1, tamanhoMaximo);
		sortear(valores, comparadorAtual + 1, tamanhoMaximo);
	}
}

void bubbleSort(int *valores, int tamanhoMaximo) {
	sortear(valores, 0, tamanhoMaximo - 1);
}
