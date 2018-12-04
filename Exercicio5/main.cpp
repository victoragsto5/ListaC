#include <iostream> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() { 
float total,imposto,dist,cfb;
setlocale(LC_ALL, "Portuguese");
printf("Digite o custo da fábrica de um carro:");
scanf("%f", &cfb); 
imposto = (45*cfb) / 100; 
dist = (28*cfb) / 100;
total = cfb+imposto+dist; 
setlocale(LC_ALL, "Portuguese");
printf("Seu carro saíra por: %f", total);
	return 0;
}
