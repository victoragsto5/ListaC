#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define m 3
#define m 3 

void funcao(int x[][], int ln, int cl) { 
int i, j; 
for (i=0; i<ln; i++) 
for (j=0; j<cl; j++) 
if (x[i][j] < 0) 
x[i][j] = - x[i][j];


int main() { 
int mat[M][N], i, j; 
for (i=0; i<M; i++) 
for (j=0; j<N; j++) { 
printf("Informe mat[%d][%d]: ", i, j); 
scanf("%d", &mat[i][j]); 
} 
printf("Matriz antes\n"); 
for (i=0; i<M; i++) { 
for (j=0; j<N; j++) 
printf("%d\t",mat[i][j]); 
printf("\n"); 
} 
funcao(mat, M, N); 
printf("Matriz depois\"); 
for (i=0; i<M; i++) { 
for (j=0; j<N; j++) 
printf("%d\t",mat[i][j]); 
printf("\n"); 
return 0; 
} 

	

