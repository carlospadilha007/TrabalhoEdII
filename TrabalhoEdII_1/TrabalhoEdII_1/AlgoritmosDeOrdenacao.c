#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"Sort.h"

void bubbleSort(TUsuario* vet) {
	int  topo, bolha;
	TUsuario aux;
	for (topo = 1; topo < n; topo++) {
		for (bolha = n - 1; bolha >= topo; bolha--) {
			if (vet[bolha].codigo < vet[bolha - 1].codigo) {
				aux = vet[bolha];
				vet[bolha] = vet[bolha - 1];
				vet[bolha - 1] = aux;
			}
		}
	}
}

void insertionSort(TUsuario* vet) {
	int idChave, i;
	TUsuario chaveAtual;
	for (idChave = 1; idChave < n; idChave++) {
		chaveAtual = vet[idChave];
		i = idChave - 1;
		while (i >= 0 && vet[i].codigo > chaveAtual.codigo) {
			vet[i + 1] = vet[i];
			i--;
		}
		vet[i + 1] = chaveAtual;
	}
}

void selectionSort(TUsuario* vet) {
	int idChave, idTemp, menorChave, idMenor;
	TUsuario aux;
	for (idChave = 0; idChave < n - 1; idChave++) {
		menorChave = vet[idChave].codigo;
		idMenor = idChave;
		for (idTemp = idChave + 1; idTemp < n; idTemp++) {
			if (vet[idTemp].codigo < menorChave) {
				menorChave = vet[idTemp].codigo;
				idMenor = idTemp;
			}
		}
		aux = vet[idChave];
		vet[idChave] = vet[idMenor];
		vet[idMenor] = aux;
	}
}

void mergeSort(TUsuario* vet, int p, int r) {
	int q;
	if (p < r) {
		q = (int)(p + r) / 2;
		mergeSort(vet, p, q);
		mergeSort(vet, q + 1, r);
		merge(vet, p, q, r);
	}
}


void merge(TUsuario* vet, int p, int q, int r) {
	int n1, n2, i, j, k;
	n1 = q - p + 1;
	n2 = r - q;
	TUsuario* E, *D;
	E = (TUsuario*)malloc(sizeof(TUsuario) * (n1 + 1));
	D = (TUsuario*)malloc(sizeof(TUsuario) * (n2 + 1));
	for (i = 0; i < n1; i++) {
		E[i] = vet[p + i];
	}
	for (j = 0; j < n2; j++) {
		D[j] = vet[q + 1 + j];
	}
	E[n1].codigo = LONG_MAX; D[n2].codigo = LONG_MAX;
	i = j = 0;
	for (k = p; k <= r; k++) {
		if (E[i].codigo <= D[j].codigo) {
			vet[k] = E[i];
			i++;
		}
		else {
			vet[k] = D[j];
			j++;
		}
	}
	free(E);
	free(D);
}

void shellSort(TUsuario* vet) {
	int k, h, idChave, i;
	TUsuario chaveAtual;
	k = 3; h = 1;
	while (h <= n) {
		h = (int)k * h + 1;
	}
	while (h != 1) {
		h = (int)h / k;
		for (idChave = h; idChave < n; idChave++) {
			chaveAtual = vet[idChave];
			i = idChave - h;
			while (i >= 0 && vet[i].codigo > chaveAtual.codigo) {
				vet[i + h] = vet[i];
				i -= h;
			}
			vet[i + h] = chaveAtual;
		}
	}
}
