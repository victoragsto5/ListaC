#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() {
int qtd_hab = 0,num_filhos,total_filhos = 0, qtd_sal_menor100 = 0;
float salario,soma_salario = 0, maior_salario;

setlocale(LC_ALL, "Portuguese");
printf("Informe o salário do habitante[negativo para encerrar]:");
scanf("%f", &salario);
while (salario >= 0){
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o número de filhos:");
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
		printf("Informe o salário do habitante[negativo para encerrar]:");
		scanf("%f", &salario);
	}
	setlocale(LC_ALL, "Portuguese");
	printf("Média de salário da população é: %.2f\n", soma_salario / qtd_hab);
	setlocale(LC_ALL, "Portuguese");
	printf("Média do número de filhos é: %.2f\n", total_filhos / qtd_hab);
	setlocale(LC_ALL, "Portuguese");
	printf("Maior salário dos habitantes é: %.2f\n", maior_salario); 
	setlocale(LC_ALL, "Portuguese");
	printf("Percentual de pessoas com salário menor que R$ 100,00 é: %.2f%%\n", qtd_sal_menor100 * 100 / qtd_hab);
}



	return 0;
}
