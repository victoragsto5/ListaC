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
	printf("S�o multiplos");
	
} else if (b % a == 0){
	setlocale(LC_ALL, "Portuguese");
	printf("S�o multiplos");
}
else {
	setlocale(LC_ALL, "Portuguese");
	printf("N�o s�o multiplos");
}
return 0;
}
	

