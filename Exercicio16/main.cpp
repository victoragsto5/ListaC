#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>



int main() {
	char palavra[100], caracter;
	int indice, tamanho, ocorrencia = 0;

	printf("\Digite uma palavra:");
	gets(palavra);
	tamanho=strlen(palavra);
	
	printf("\nDigite um caraceter:");
	scanf("%c",&caracter);
	
	for(indice = 0; indice < tamanho; indice++){
		if(palavra[indice] == caracter){
		printf("\nPosicao do caractere:%d\n", indice+1);
			ocorrencia = 1;
		}
	}
	
	if(ocorrencia == 0){
		printf("\nCaractere nao localizado");
	}
	return 0;
}
