#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
int cont, x, y;

    printf("Entre com um valor de 2 a 20: ");
    scanf("%d", &x);

    for (cont=1; cont<=x; cont++) {
        for (y=1; y<=cont; y++)
            printf("%d", y);
        printf("\n");
    }

    for (cont=cont-2; cont>0; cont--) {
        for (y=1; y<=cont; y++)
            printf("%d", y);
        printf("\n");
    }

    printf("\n");
    return 0;
}
	

