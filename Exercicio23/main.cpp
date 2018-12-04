#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
int tempo;
float dist,litros_u,velo;

printf("Digite o tempo gasto na viagem: ");
scanf("%i", &tempo);
setlocale(LC_ALL, "Portuguese");
printf("Digite a velocidade média: ");
scanf("%f", &velo);
dist = tempo * velo;
litros_u = dist / 12;
setlocale(LC_ALL, "Portuguese");
printf("Velocidade média foi: %f \n", velo);
printf("Tempo gasto na viagem foi: %i \n", tempo);
printf("Distancia percorrida foi: %f \n", dist);
printf("A quantidade de litros utilizados na viagem foi: %f \n", litros_u);
	return 0;
}
