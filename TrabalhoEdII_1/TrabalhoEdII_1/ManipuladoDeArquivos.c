#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include "Sort.h"

void criaArquivos() {
	FILE *file1;
	FILE *file2;
	file1 = fopen("Entrada.dat", "w");
	file2 = fopen("Saida.txt", "w");
	fclose(file1);
	fclose(file2);
}

void leitorArquivos(TUsuario *vet) {
	FILE *file;
	file = fopen("Entrada.dat", "r");
	if (file == NULL) {
		return;
	}
	file = fclose(args);
}
void escreverArquivos(TUsuario *vet) {
	FILE *file;
	file = fopen("Entrada.dat", "w");
	long int i;
	for (i = 0; i < n; i++) {
		fprintf(file, "%li %s %s %s\n", vet[i].codigo, vet[i].nome, vet[i].email, vet[i].senha);
	}
	return;
}

void criaCodigo(TUsuario *vet) {
	long int *betina;
	betina = (long int*)malloc(sizeof(long int) * (1000000));
	long int num = 0, i;
	for (i = 0; i < 1000000; i++) {
		betina[i] = 0;
	}
	for (i = 0; i < n; i++) {
		do {
			if (betina[num] == 0 && num < 1000000) {
				betina[num] = 1;
			}
			num = 0;
			num += rand() % 10 * (rand() % RAND_MAX + (rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000));
			if (betina[num] == 0 && num < 1000000) {
				vet[i].codigo = num;
			}
		} while (betina[num] == 1);
	}
	free(betina);
}

void criaDadosVetor(TUsuario *vet) {
	long int i;
	int j, tam;
	char aux[50] = "\0";
	for (i = 0; i < n; i++) {
		tam = rand() % 30;
		for (j = 0; j < tam; j++) {
			vet[i].nome[j] = (char)65 + rand() % 57;
		}
		vet[i].nome[j] = '\0';
		tam = rand() % 30;
		for (j = 0; j < tam; j++) {
			vet[i].senha[j] = (char)33 + rand() % 92;
		}
		vet[i].senha[j] = '\0';
		strcpy(vet[i].email, vet[i].nome);
		strcat(vet[i].email, "@email.com");
	}
	return;
}
