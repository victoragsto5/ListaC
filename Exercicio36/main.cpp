#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define TAM 4



int main() {
int i,j,n;


for (i=0; i < TAM; i++){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero para o c�lculo da tabuada desejada de 1 a ate o n�mero desejado\n");
	scanf("%d", &n);
	for(j=1; j <= n; j++){
		printf("%d x %d = %d\n", j, n, j * n);
	}
}

	return 0;
}
