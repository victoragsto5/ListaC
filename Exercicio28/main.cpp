#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
int b;
float salariom,c,d,e,salario;

setlocale(LC_ALL, "Portuguese");
printf("Digite o valor do sal�rio minimo:");
scanf("%f", &salariom);
setlocale(LC_ALL, "Portuguese");
printf("Digite o n�mero de carros vendidos:");
scanf("%f", &b);
setlocale(LC_ALL, "Portuguese");
printf("Digite o valor total das vendas do m�s:");
scanf("%f", &c);
d = (c*5)/100;
e = b*500,00;
salario = (2*salariom)+e+d;
setlocale(LC_ALL, "Portuguese");
printf("O sal�rio este m�s do vendedor �: %f", salario);
	return 0;
}
