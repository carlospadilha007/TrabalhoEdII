#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Sort.h"

void calculadorPricipal(TUsuario *vet) {
	tipoBusca = "Merge Sorte";
	calculaMerge(vet);
	escreveSaida();
}

void calculaBubble(TUsuario *vet) {
	int chave;
	comparacoes = 0;
	inicioExecucao = clock();
	bubbleSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao > buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(vet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		comparacoes++;
	}
}

void calculaSelection(TUsuario *vet) {

}

void calculaInsertion(TUsuario *vet) {

}

void calculaShell(TUsuario *vet) {

}

void calculaMerge(TUsuario *vet) {
	int chave;
	comparacoes = 0;
	inicioExecucao = clock();
	mergeSort(vet, 0, n -1);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao > buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(vet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		comparacoes++;
	}
}

void calculaHeap(TUsuario *vet) {

}

void calculaQuick(TUsuario *vet) {

}

int geraChave() {
	long int num = 0;
	do {
		num = 0;
		num += rand() % 10 * (rand() % RAND_MAX + (rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000));
	} while (num > 1000000);
	
	return num;
}