#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> 
#define PI 3.141592

int main() {
float a,r;
printf("Digite o raio:\n");
scanf("%f", &r);
a = PI*(pow(r,2));
setlocale(LC_ALL, "Portuguese");
printf("A área da circunferência é %2.f", a);
	return 0;
}
