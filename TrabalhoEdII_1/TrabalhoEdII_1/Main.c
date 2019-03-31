#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "Sort.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	TUsuario vet[n];
	escreveVetor(vet);
	system("cls");
	imprimiVetor(vet);
	shellSort(vet, 0, n - 1);
	imprimiVetor(vet);
	getch();
	return 0;
}

