#pragma once

// Constantes
#define n 100000

// Variáveis globais
char args[30];

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

// Funções de apoio
void escreveVetor(TUsuario vet[]);
void imprimiVetor(TUsuario vet[]);

// Manipulador de dados
void escreverArquivos();
void leitorArquivos(TUsuario *vet);
void criaArquivos();
void criaCodigo(TUsuario *vet);
void criaDadosVetor(TUsuario *vet);