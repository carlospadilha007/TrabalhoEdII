#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Sort.h"

/** Este arquivo é responsavel por calcular o numero de buscas necessárias
 *	para a busca binaria ser mais vantajosa para a busca sequncial para 
 *	cada algortimo de busca.
**/

// Função que fara a chamada das funções que calcularam a eficacia de cada algoritmo de ordenação
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

// Função que fara o calculo de eficiencia do busca bin. + bublle
void calculaBubble(TUsuario *vet) {
	time_t inicioExecucao, fimExcucao;
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	// cria dois vetores de conteudo identico
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	bubbleSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) { // executa enquanto a busca seq. for mais rapida que a busca bin.
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

// Função que fara o calculo de eficiencia do busca bin. + selection
void calculaSelection(TUsuario *vet) {
	time_t inicioExecucao, fimExcucao;
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	// cria dois vetores de conteudo identico
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	selectionSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) { // executa enquanto a busca seq. for mais rapida que a busca bin.
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

// Função que fara o calculo de eficiencia do busca bin. + insertion
void calculaInsertion(TUsuario *vet) {
	time_t inicioExecucao, fimExcucao;
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	// cria dois vetores de conteudo identico
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	insertionSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) { // executa enquanto a busca seq. for mais rapida que a busca bin.
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

// Função que fara o calculo de eficiencia do busca bin. + shell
void calculaShell(TUsuario* vet) {
	time_t inicioExecucao, fimExcucao;
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario* auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	// cria dois vetores de conteudo identico
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	shellSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) { // executa enquanto a busca seq. for mais rapida que a busca bin.
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

// Função que fara o calculo de eficiencia do busca bin. + merge
void calculaMerge(TUsuario *vet) {
	time_t inicioExecucao, fimExcucao;
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario *auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	// cria dois vetores de conteudo identico
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	mergeSort(vet, 0, n - 1);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) { // executa enquanto a busca seq. for mais rapida que a busca bin.
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

// Função que fara o calculo de eficiencia do busca bin. + heap
void calculaHeap(TUsuario *vet) {
	time_t inicioExecucao, fimExcucao;
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario* auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	// cria dois vetores de conteudo identico
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	heapSort(vet);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) { // executa enquanto a busca seq. for mais rapida que a busca bin.
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

// Função que fara o calculo de eficiencia do busca bin. + quick
void calculaQuick(TUsuario *vet) {
	time_t inicioExecucao, fimExcucao;
	long int chave;
	buscaBinariaTempoExecucao = buscaSequencialTempoExecucao = 0;
	contBuscas = 0;
	TUsuario* auxvet;
	auxvet = (TUsuario*)malloc(sizeof(TUsuario) * (n));
	// cria dois vetores de conteudo identico
	encheVetor(auxvet);
	encheVetor(vet);
	inicioExecucao = clock();
	quickSort(vet, 0, n - 1);
	fimExcucao = clock();
	buscaBinariaTempoExecucao += (double)(fimExcucao - inicioExecucao) / CLOCKS_PER_SEC;
	while (buscaBinariaTempoExecucao >= buscaSequencialTempoExecucao) { // executa enquanto a busca seq. for mais rapida que a busca bin.
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
