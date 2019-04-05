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
	mergeSort(vet, 0, n - 1);
	escreverArquivos(vet);
	getch();
	return 0;
}

