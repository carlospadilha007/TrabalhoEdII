#pragma once
#include <time.h>

// Constantes
#define n 100000

// Variáveis globais
char *tipoBusca;
long int contBuscas;
double tempoExecucao, buscaBinariaTempoExecucao, buscaSequencialTempoExecucao;
time_t inicioExecucao, fimExcucao; // Variaveis do tipo clock que faram a captura do tempo

// Estruturas de dados
typedef struct {
	long int codigo;
	char nome[50];
	char email[50];
	char senha[30];
} TUsuario;


// Algoritmos de ordenação
void bubbleSort(TUsuario* vet);
void insertionSort(TUsuario* vet);
void selectionSort(TUsuario* vet);
void shellSort(TUsuario* vet);
void merge(TUsuario* vet, int p, int q, int r);
void mergeSort(TUsuario* vet, int p, int r);

//Algoritmos de busca
void busca_Sequencial(TUsuario *vetor, long int chave);
void busca_Binaria(TUsuario *vetor, long int chave);

// Funções de apoio
void escreveVetor(TUsuario vet[]);
void imprimiVetor(TUsuario vet[], long int inicio, long int fim);

// Manipulador de dados
void escreverArquivos(TUsuario *vet);
void leitorArquivos(TUsuario *vet);
void criaArquivos();
void criaCodigo(TUsuario *vet);
void criaDadosVetor(TUsuario *vet);
void encheVetor(TUsuario *vet);
void escreveSaida();

//Funções que calcularam o tempo de execução
void calculadorPricipal(TUsuario *vet);
void calculaBubble(TUsuario *vet);
void calculaSelection(TUsuario *vet);
void calculaInsertion(TUsuario *vet);
void calculaShell(TUsuario *vet);
void calculaMerge(TUsuario *vet);
void calculaHeap(TUsuario *vet);
void calculaQuick(TUsuario *vet);
long int geraChave();