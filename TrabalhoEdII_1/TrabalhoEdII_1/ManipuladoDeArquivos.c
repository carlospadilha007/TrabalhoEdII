#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include "Sort.h"

/**
  * Este arquivo armazena todas funções que de manipualam os arquivos de entrada e saída
**/

// Função que cria os arquivos de entrada e saida
void criaArquivos() {
	FILE *file1;
	FILE *file2;
	file1 = fopen("Entrada.dat", "wb");
	file2 = fopen("Saida.txt", "w");
	fclose(file1);
	fclose(file2);
}

// Função que abilita a leitura de arquivos
void leitorArquivos(TUsuario *vet) {
	FILE *file;
	file = fopen("Entrada.dat", "r");
	if (file == NULL) {
		return;
	}
	file = fclose("Entrada.dat");
}

// Função que fara a escrita dos valores do vetor um arquivo binario .dat
void escreverArquivos(TUsuario *vet) {
	FILE *file;
	file = fopen("Entrada.dat", "wb");
	long int i;
	for (i = 0; i < n; i++) {
		// Escrita de valores atravez da função fwrite que aloca e grava no arquivo uma struct inteira
		fwrite(&vet[i], sizeof(TUsuario), 1, file);
	}
	return;
}

// Função que criara um número entre 0 e 1000000 e atribuirá o mesmo ao campo da respectiva posição do vetor de struct
void criaCodigo(TUsuario *vet) {
	long int *betina;
	betina = (long int*)malloc(sizeof(long int) * (1000000));
	long int num = 0, i;
	for (i = 0; i < 1000000; i++) {
		betina[i] = 0;
	}
	for (i = 0; i < n; i++) {
		do {
			
			if (betina[num] == 0) {
				betina[num] = 1;
			}
			while (1 == 1)
			{
				num = 0;
				num += rand() % 10 * (rand() % RAND_MAX + (rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000 + rand() % 10000));
				if (num < 1000000) {
					break;
				}
			}
			
			if (betina[num] == 0) {
				vet[i].codigo = num;
			}
			
		} while (betina[num] == 1);
	}
	free(betina);
}

// Função que cria os demais dados das estruturas do vetor: Nome, Email e Senha
void criaDadosVetor(TUsuario *vet){
	criaCodigo(vet);
	long int i;
	int j, tam, teste;
	char aux[50] = "\0";
	for (i = 0; i < n; i++) {
		tam = 1 + rand() % 5 + rand() % 30;
		for (j = 0; j < tam; j++) {
			teste = 65 + rand() % 57;
			while(teste >= 90 && teste <= 94 || teste == 96) {
				teste = 65 + rand() % 57;
			}
			vet[i].nome[j] = (char)teste;
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

// Função que fara a leitura dos dados do arquivo binario e prenchera o vetor
void encheVetor(TUsuario *vet) {
	FILE *file;
	do {
		file = fopen("Entrada.dat", "rb");
	} while (file == NULL);
	long int i;
	for (i = 0; i < n; i++) {
		fread(&vet[i], sizeof(TUsuario), 1, file);
	}
	fclose(file);
	return;
}

/** Função que escrera no arquivo de saida o metodo de ordeção, e o tempo e o numero de buscas necessarias para
  * A busca binnaria ser mais eficiente que a busca sequencial
**/
void escreveSaida() {
	FILE *file;
	file = fopen("Saida.txt", "a");
	fprintf(file, "Analise: Busca Sequencial x Busca Binaria + %s:\nQuantidade de chaves buscadas : %li\nTempo(s) Busca Sequencial : %.5f\nTempo(s) Busca Binaria : %.5f\n\n", tipoBusca, contBuscas, buscaSequencialTempoExecucao, buscaBinariaTempoExecucao);
	fclose(file);
}
