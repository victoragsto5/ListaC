#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>



int main() { 
int indice, qtd_num, num_digitado, soma_pares = 0, soma_impares = 0;
		
	printf("\nDigite a quantidade de numeros:");
	scanf("%d",&qtd_num);
	printf("\n");
	
	for(indice = 0; indice < qtd_num; indice++) {
		printf("Digite um numero:");
		scanf("%d", &num_digitado);
		
		if (num_digitado % 2 == 0){
        	soma_pares += num_digitado;
	    }else {
	        soma_impares += num_digitado;
	    }
	}
	
	printf("\n");
	printf("Total Pares:%d\n", soma_pares);
	printf("Total Impares:%d\n", soma_impares);
}
