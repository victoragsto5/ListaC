#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
int b;
float salariom,c,d,e,salario;

setlocale(LC_ALL, "Portuguese");
printf("Digite o valor do salário minimo:");
scanf("%f", &salariom);
setlocale(LC_ALL, "Portuguese");
printf("Digite o número de carros vendidos:");
scanf("%f", &b);
setlocale(LC_ALL, "Portuguese");
printf("Digite o valor total das vendas do mês:");
scanf("%f", &c);
d = (c*5)/100;
e = b*500,00;
salario = (2*salariom)+e+d;
setlocale(LC_ALL, "Portuguese");
printf("O salário este mês do vendedor é: %f", salario);
	return 0;
}
