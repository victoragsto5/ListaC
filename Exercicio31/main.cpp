#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAX 5



int main(void) {
int nn = 0, a, i;

for(i=0; i<MAX; i++)
{
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o %i número:", i+1);
	scanf("%i", &a);
	
	if(a<0)
	{
		nn++;
	}
}

setlocale(LC_ALL, "Portuguese");
printf("Números negativos: %i", nn);
	return 0;
}
