#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	float n1,n2,n3;
	float media; 
	int option;
	
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número 1 para média aritmética,digite o número 2 para média ponderada ou digite número 3 para média harmônica: "); 
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
		printf("A media das suas notas é: %f", media); 
	    } else if(option == 2){
		
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
		media = ((n1*3) + (n2*3) + (n3*4))/ 3 ;
		setlocale(LC_ALL, "Portuguese");
		printf("A média ponderada é: %f", media); 
		}else if(option == 3) {
		
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		printf("Digite a terceira nota ");
		scanf("%f", &n3); 
		media = 3 / ((1/n1) + (1/n2) + (1/n3)); 
		setlocale(LC_ALL, "Portuguese");
		printf("A média harmônica é: %f", media);
		} else { 
		    (LC_ALL, "Portuguese");
			printf("Digite uma opção válida");
		}
		
		
		
		
		
		 
    system("pause");		
	return 0;	
} 
      
	
	
	

