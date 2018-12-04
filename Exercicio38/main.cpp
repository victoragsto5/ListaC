#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct dado{
int horas;
int minutos;
}Dado;

int main() {
      Dado w;
	  int x,y;
	  printf("informe os minutos:");
	  scanf("%d", &w.minutos);
	  y=w.minutos/60;
	  x=w.minutos%60;
	  printf("%.2d:%.2d", y, x); 
	  system("pause");
	  return 0;
	return 0;
}
