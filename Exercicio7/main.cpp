#include <iostream> 
#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>



int main() {
int a,b;
printf("Digite o valor de a: ");
scanf("%i", &a);
printf("Digite o valor de b: ");
scanf("%i", &b);
if(a % b == 0){
	setlocale(LC_ALL, "Portuguese");
	printf("São multiplos");
	
} else if (b % a == 0){
	setlocale(LC_ALL, "Portuguese");
	printf("São multiplos");
}
else {
	setlocale(LC_ALL, "Portuguese");
	printf("Não são multiplos");
}
return 0;
}
	

