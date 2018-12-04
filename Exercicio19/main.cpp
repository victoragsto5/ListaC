#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h> 


int mult[3][3], l, c, a, n, d, rl[3], rc[3];
printf("Digite valores inteiros para a matriz : ");
for (l = 0; l < 2; l++)
{
	for(c = 0; c <3; c++) 
	{
		printf("Linha: %i, coluna : %i", l, c);
		scanf("%i", &mult[l][c]);
	}



} 
setlocale(LC_ALL, "Portuguese");
printf("Qual linha você deseja multiplicar?"); 
scanf("%i", &l);
setlocale(LC_ALL, "Portuguese");
printf("Por qual número?");
scanf("%i", &n);
for (l = 0; l < 3; l++);
rl[l] = mult[l][c] * n;
printf("O resultado foi: ");
for (l = 0; l < 3; l++)
printf("%i", rl[l]);
setlocale(LC_ALL, "Portuguese");
printf("Qual coluna você quer multiplicar?");
scanf_s("%i", &c);
setlocale(LC_ALL, "Portuguese");
printf("Por qual número?");
scanf_s("%i", &n);
for (c = 0; c < 2; c++)
rc[c] = mat[l][c] * n;
printf("O resultado foi :");
for (c = 0; c < 2; c++)
printf("%i", rc[c]);



int main() { 
int l,c,matriz[3][3];
mult (matriz);
printf("Resultado: %i", )
	return 0;
}
