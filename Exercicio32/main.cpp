#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() {
int qtd_hab = 0,num_filhos,total_filhos = 0, qtd_sal_menor100 = 0;
float salario,soma_salario = 0, maior_salario;

setlocale(LC_ALL, "Portuguese");
printf("Informe o sal�rio do habitante[negativo para encerrar]:");
scanf("%f", &salario);
while (salario >= 0){
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o n�mero de filhos:");
	scanf("%d", &num_filhos);
	qtd_hab ++ ;
	soma_salario += salario;
	total_filhos += num_filhos;
	if(qtd_hab == 1){
		maior_salario = salario;
	}else if(maior_salario < salario){
		maior_salario = salario;
	}else if(salario < 150){
		qtd_sal_menor100 ++ ;
		setlocale(LC_ALL, "Portuguese");
		printf("Informe o sal�rio do habitante[negativo para encerrar]:");
		scanf("%f", &salario);
	}
	setlocale(LC_ALL, "Portuguese");
	printf("M�dia de sal�rio da popula��o �: %.2f\n", soma_salario / qtd_hab);
	setlocale(LC_ALL, "Portuguese");
	printf("M�dia do n�mero de filhos �: %.2f\n", total_filhos / qtd_hab);
	setlocale(LC_ALL, "Portuguese");
	printf("Maior sal�rio dos habitantes �: %.2f\n", maior_salario); 
	setlocale(LC_ALL, "Portuguese");
	printf("Percentual de pessoas com sal�rio menor que R$ 100,00 �: %.2f%%\n", qtd_sal_menor100 * 100 / qtd_hab);
}



	return 0;
}
