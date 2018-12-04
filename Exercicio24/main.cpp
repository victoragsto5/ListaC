#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main() { 
int a,b,troca;

printf("Informe o valor da variavel A: ");
scanf("%i", &a);
printf("Informe o valor da variavel B: ");
scanf("%i", &b);
troca = a;
a = b;
b = troca;
setlocale(LC_ALL, "Portuguese");
printf("O novo valor de A é: %i\n", a);
setlocale(LC_ALL, "Portuguese");
printf("O novo valor de B é: %i", b);
	return 0;
}
