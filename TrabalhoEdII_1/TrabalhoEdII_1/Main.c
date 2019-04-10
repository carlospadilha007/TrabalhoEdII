#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "Sort.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	TUsuario *vet;
	vet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	criaArquivos();
	criaCodigo(vet);
	criaDadosVetor(vet);
	escreverArquivos(vet);
	mergeSort(vet, 0, n - 1);
	encheVetor(vet);
	calculadorPricipal(vet);
	printf("Fim da execução\n");
	getch();
	return 0;
}
