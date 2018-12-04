#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() {
float a,b,c;

printf("Entre com a primeira medida:");
scanf("%f", &a);
printf("Entre com a segunda medida: ");
scanf("%f", &b);
printf("Entre com a terceira medida: ");
scanf("%f", &c);

if ((a<0) || (b < 0) || (c < 0)){
	setlocale(LC_ALL, "Portuguese");
	printf("Os valores não formam um triangulo:");
} 

else if((a==b) || (a==c)|| (b==c)){
	setlocale(LC_ALL, "Portuguese");
	printf("Triangulo Equilatéro");
}else if((a==b) || (a==c) || (b==c)){
 setlocale(LC_ALL, "Portuguese");
 printf("Triangulo Isóceles");
}else if((a!=b) || (a!=c) || (b!=c)){
printf("Triangulo Escaleno");
}
	return 0;
}
