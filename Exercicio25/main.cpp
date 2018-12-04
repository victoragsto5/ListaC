#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() {
float salariob,t,salariol;

setlocale(LC_ALL, "Portuguese");
printf("Entre com seu salário bruto: ");
scanf("%f", &salariob);
t = salariob - (salariob*0.1);
salariol = t - (t*0.05);
setlocale(LC_ALL, "Portuguese");
printf("O salário líquido é: %f", salariol);
	return 0;
}
