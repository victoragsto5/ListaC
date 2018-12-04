#include <iostream> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() { 
int  n,soma;
printf("Digite o valor de n: ");
scanf("%i", &n);
soma = n*(n+1)/2;
setlocale(LC_ALL, "Portuguese");
printf("A soma dos primeiros inteiros são: %i", soma);
	return 0;
}
