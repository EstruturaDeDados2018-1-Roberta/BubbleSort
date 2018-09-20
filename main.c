#include <stdio.h>
#include "main.h"
#include "bubbleSort.h"

void imprimeArray(int array[], int tamanhoMaximo) {
	int i = 0;
	for(i = 0; i < tamanhoMaximo - 1; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	int tamanhoMaximo = 10;
	int array[] = {1, 4, 3, 7, 8, 9, 2, 5, 6, 0};
	int *pArray = array;
	bubbleSort(pArray, tamanhoMaximo);
	imprimeArray(array, tamanhoMaximo);
	return 0;
}
