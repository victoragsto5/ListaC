#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() { 
float x1,x2,y1,y2;
float d;
printf("Digite o valor de x1\n");
scanf("%f", &x1);
printf("Digite o valor de x2\n");
scanf("%f", &x2);
printf("Digite o valor de y1\n");
scanf("%f", &y1);
printf("Digite o valor de y2\n");
scanf("%f", &y2);

d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))); 
printf("A distancia entre os pontos e %f\n", d);
system("pause");
	return 0;
}
