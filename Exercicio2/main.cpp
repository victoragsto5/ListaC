 #include <iostream>
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h> 
 #include <locale.h>

 main()
 {

 float A, B, C, resab, resbc, R, S;

 printf("Digite A: ");
 scanf("%f", &A);
 printf("Digite B: ");
 scanf("%f", &B);
 printf("Digite C: ");
 scanf("%f", &C);

 resab=A+B;
 resbc=B+C;
 R=pow(resab,2);
 S=pow(resbc,2);

 setlocale(LC_ALL, "Portuguese");
 printf("A variável D é: %.1f",(R+S)/2);

 return 0;

 }

