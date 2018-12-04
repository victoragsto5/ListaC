#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define TAM 4



int main() {
int i,j,n;


for (i=0; i < TAM; i++){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número para o cálculo da tabuada desejada de 1 a ate o número desejado\n");
	scanf("%d", &n);
	for(j=1; j <= n; j++){
		printf("%d x %d = %d\n", j, n, j * n);
	}
}

	return 0;
}
