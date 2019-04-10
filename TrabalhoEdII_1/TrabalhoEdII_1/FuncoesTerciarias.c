#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Sort.h"
void imprimiVetor(TUsuario vet[], long int inicio, long int fim) {
	long int i;
	for (i = inicio; i < fim; i++) {
		printf("Vetor na posição: %d° \n", i + 1);
		printf("Codigo: %li\n", vet[i].codigo);
		printf("Nome: %s\n", vet[i].nome);
		printf("Email: %s\n", vet[i].email);
		printf("Senha: %s\n", vet[i].senha);
	}
	printf("\n\n");
	return;
}
void escreveVetor(TUsuario vet[]) {
	int i, j, tam;
	srand(time(NULL));
	char aux[50] = "\0";
	for (i = 0; i < n; i++) {
		printf("Vetor na posição: %d° \nCodigo: ", i + 1);
		fflush(stdin);
		scanf("%li", &vet[i].codigo);
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
	printf("\n\n");
	return;
}


long int geraChave() {
	long int num = 0;
	do {
		num = 0;
		num += rand() % 10 * (rand() % RAND_MAX + (rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000));
	} while (num > 1000000);

	return num;
}