#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
int i,n,soma = 0; 
setlocale(LC_ALL, "Portuguese");
printf("Digite um número inteiro: ");
scanf("%d", &n); 
for(i=0;i<n;i++) 
printf(" %d ", i*2+1); 
return 1; 
	return 0;
}
