#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Sort.h"

/**
  * Este arquivos armazena as funções de busca
**/

long int busca_Sequencial(TUsuario *vetor, long int chave) {
	int i = 0;
	while (chave != vetor[i].codigo && i < n) {
		i++;
	}
	return i;
}

long int busca_Binaria(TUsuario *vetor, long int chave) {
	long int dir = n - 1;
	long int esq = 0;
	long int encontrado = 0;
	long int meio;

	while (esq <= dir && !encontrado) {
		meio = (int)(esq + dir) / 2;
		if (vetor[meio].codigo == chave) {
			encontrado = 1;
			return meio;
		}
		else {
			if (chave < vetor[meio].codigo) {
				dir = meio - 1;
			}
			else {
				esq = meio + 1;
			}
		}
	}

	return -1;
}
