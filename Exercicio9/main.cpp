#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	float n1,n2,n3;
	float media; 
	int option;
	
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o n�mero 1 para m�dia aritm�tica,digite o n�mero 2 para m�dia ponderada ou digite n�mero 3 para m�dia harm�nica: "); 
	scanf("%i", &option);
   
	
	
	
		if(option == 1){
		
		printf("Digite a primeira nota: ");
	    scanf("%f", &n1);
		printf("Digite a segunda nota: ");
	   	scanf("%f", &n2);
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
		media = (n1+n2+n3) / 3;
		setlocale(LC_ALL, "Portuguese");
		printf("A media das suas notas �: %f", media); 
	    } else if(option == 2){
		
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
		media = ((n1*3) + (n2*3) + (n3*4))/ 3 ;
		setlocale(LC_ALL, "Portuguese");
		printf("A m�dia ponderada �: %f", media); 
		}else if(option == 3) {
		
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		printf("Digite a terceira nota ");
		scanf("%f", &n3); 
		media = 3 / ((1/n1) + (1/n2) + (1/n3)); 
		setlocale(LC_ALL, "Portuguese");
		printf("A m�dia harm�nica �: %f", media);
		} else { 
		    (LC_ALL, "Portuguese");
			printf("Digite uma op��o v�lida");
		}
		
		
		
		
		
		 
    system("pause");		
	return 0;	
} 
      
	
	
	

