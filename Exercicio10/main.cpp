#include <iostream> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() { 
int codprod;
float qtd,calc;
float prec; 

printf("Informe a quantidade do produto: ");
scanf("%f", &qtd); 
setlocale(LC_ALL, "Portuguese");
printf("Informe o c�digo do produto: ");
scanf("%i", &codprod); 

if (codprod == 1001){  
    calc = (5.32 * qtd);
    setlocale(LC_ALL, "Portuguese");
	printf("O valor a ser pago �: %f", calc);
} else if(codprod == 1324) {
	 calc = (6.45 * qtd);
    setlocale(LC_ALL, "Portuguese"); 
    printf("O valor a ser pago �: %f", calc);
} else if(codprod == 6548){
	 calc = (2.37 * qtd);
	setlocale(LC_ALL, "Portuguese");
	printf("O valor a ser pago �: %f", calc);
} else if(codprod == 987){
	 calc = (5.32 * qtd);
	setlocale(LC_ALL, "Portuguese");
	printf("O valor a ser pago �: %f", calc);
} else if(codprod == 7623){
	calc = (6.45 * qtd);
	setlocale(LC_ALL, "Portuguese");
	printf("O valor a ser pago �: %f", calc);
} else { 
    setlocale(LC_ALL, "Portuguese");
	printf("Digite uma op��o v�lida: ");
}
	return 0;
}
