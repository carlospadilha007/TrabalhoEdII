#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "Sort.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	time_t inicio, fim;
	double tempoExecucao;
	inicio = clock();// inicio da execu��o
	TUsuario *vet;
	vet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	/*criaArquivos();
	criaDadosVetor(vet);
	escreverArquivos(vet);*/
	calculadorPricipal(vet);
	printf("Fim da execu��o\n");
	fim = clock(); // fim da execu��o
	tempoExecucao = (double) (fim - inicio)/ CLOCKS_PER_SEC;
	printf("Tempo de execu��o: %.3f segundos", tempoExecucao);
	getch();
	return 0;
}
