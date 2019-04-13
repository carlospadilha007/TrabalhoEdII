#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Sort.h"

void calculadorPricipal(TUsuario *vet) {
	//Calcula o tempo do Bubble
	tipoBusca = "Bubble Sort";
	calculaBubble(vet);
	escreveSaida();
	//Calcula o tempo do Selection
	tipoBusca = "Selection Sort";
	calculaSelection(vet);
	escreveSaida();
	//Calcula o tempo do Insertion
	tipoBusca = "Insertion Sort";
	calculaInsertion(vet);
	escreveSaida();
	//Calcula o tempo do Shell
	tipoBusca = "Shell Sort";
	calculaShell(vet);
	escreveSaida();
	//Calcula o tempo do Merge
	tipoBusca = "Merge Sort";
	calculaMerge(vet);
	escreveSaida();
	//Calcula o tempo do Heap
	tipoBusca = "Heap Sort";
	calculaHeap(vet);
	escreveSaida();
	//Calcula o tempo do Quick
	tipoBusca = "Quik Sort";
	calculaQuick(vet);
	escreveSaida();
}

void calculaBubble(TUsuario *vet) {
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	bubbleSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(auxvet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		contBuscas++;
	}
	free(auxvet);
}

void calculaSelection(TUsuario *vet) {
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	selectionSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(auxvet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		contBuscas++;
	}
	free(auxvet);
}

void calculaInsertion(TUsuario *vet) {
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	insertionSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(auxvet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		contBuscas++;
	}
	free(auxvet);
}

void calculaShell(TUsuario* vet) {
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario* auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	shellSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(auxvet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		contBuscas++;
	}
	free(auxvet);
}

void calculaMerge(TUsuario *vet) {
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	mergeSort(vet, 0, n - 1);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(auxvet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		contBuscas++;
	}
	free(auxvet);
}

void calculaHeap(TUsuario *vet) {
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario* auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	heapSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(auxvet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		contBuscas++;
	}
	free(auxvet);
}

void calculaQuick(TUsuario *vet) {
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario* auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	quickSort(vet, 0, n - 1);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) {
		chave = geraChave();
		//Busca Binária
		inicioExecucao = clock();
		busca_Binaria(vet, chave);
		fimExcucao = clock();
		buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		//Busca sequencial
		inicioExecucao = clock();
		busca_Sequencial(auxvet, chave);
		fimExcucao = clock();
		buscaSequencialTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
		contBuscas++;
	}
	free(auxvet);
}
