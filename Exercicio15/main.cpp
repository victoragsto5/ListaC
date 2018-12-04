#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main() { 
int x,n,p,cont;

printf("Calculo das potencias: \n");
printf("Digite um numero inteiro: \n");
scanf("%i", &x);
printf("Digite um numero natural: ");
scanf("%i", &n); 

p = 1;
cont = 0;

while(cont != n){
	p = p * x;
	cont = cont + 1;
} 

printf("\n O valor de %i elevado a %i : %i\n", x, n, p);

	return 0;
}
