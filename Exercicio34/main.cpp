#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main() {
int x,n, maior = 0, menor = 0;
for (x=1; x<=50; x++){
	setlocale(LC_ALL, "Portuguese");
	printf("Informe um n�mero: \n");
	scanf("%d", &n);
}if (n > maior){
	maior = n;
}else if(n < menor) {
	menor = n;
	
}
printf("O maior n�mero � %d e o menor �: %d \n ", maior,menor);
	system("Pause");
	return 0;
}
