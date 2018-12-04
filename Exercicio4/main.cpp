#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>


int main() { 
float n1,n2,n3,mediaP;
printf("Digite a nota 1: ");
scanf("%f", &n1);
printf("Digite a nota 2: ");
scanf("%f", &n2);
printf("Digite a nota 3: ");
scanf("%f", &n3);
mediaP = ((n1*2) + (n2*3) + (n3*5))/ 10;
setlocale(LC_ALL, "Portuguese");
printf("a media ponderada é: %f", mediaP);


	return 0;
}
