#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>




int main() { 
float base, altura, area;
    printf("Digite o valor da base do tri�ngulo: ");
    scanf("%f", &base);
    printf("Digte o valor da altura do tri�ngulo: ");
    scanf("%f", &altura);
    area = ((base*altura)/2);
    setlocale(LC_ALL, "Portuguese");
    printf("A area do tri�ngulo �: %2.1f\n\n", area);

	return 0;
}
