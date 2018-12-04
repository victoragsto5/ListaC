#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() {
int b,c,d;
float comp,pag,a;

printf("Digite o valor compra: ");
scanf("%f", &comp);
printf("Digite o valor do pagamento: ");
scanf("%f", &pag);

a = (comp-pag);
b = (a >= 100)/100;
c = (b / 10);
d = (c / 1); 

printf("Notas de 100: %i", b);
printf("Notas de 10: %i", c);
printf("Notas de 1: %i", d);
	return 0;
}
