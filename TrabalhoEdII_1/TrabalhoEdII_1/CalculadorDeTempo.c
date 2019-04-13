#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Sort.h"

void calculadorPricipal(TUsuario *vet) {
	//Calcula o tempo do Bubble
	tipoBusca = "Bubble Sorte";
	calculaBubble(vet);
	escreveSaida();
	//Calcula o tempo do Selection
	tipoBusca = "Selection Sorte";
	calculaSelection(vet);
	escreveSaida();
	//Calcula o tempo do Insertion
	tipoBusca = "Insertion Sorte";
	calculaInsertion(vet);
	escreveSaida();
	//Calcula o tempo do Shell
	tipoBusca = "Shell Sorte";
	calculaShell(vet);
	escreveSaida();
	//Calcula o tempo do merge
	tipoBusca = "Merge Sorte";
	calculaMerge(vet);
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
