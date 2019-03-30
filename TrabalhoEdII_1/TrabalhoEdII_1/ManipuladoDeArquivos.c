#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
#include "Sort.h"

void geraArquivos(char args[]) {
	FILE *file;
	file = fopen(args, "w");

	file = fclose(args);
}

void leitorArquivos(char args[]) {
	FILE *file;
	file = fopen(args, "r");
	if (file == NULL) {
		return;
	}
	file = fclose(args);
}
void escreverArquivos(char args[]) {

}
