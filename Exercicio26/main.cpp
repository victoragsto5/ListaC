#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



int main() {
int nd,nm,na;
int hd,hm,ha;
int ndias;

setlocale(LC_ALL, "Portuguese");
printf("Informe o dia no qual voc� nasceu: ");
scanf("%i", &nd);
setlocale(LC_ALL, "Portuguese");
printf("Informe o m�s no qual voc� nasceu: ");
scanf("%i", &nm);
setlocale(LC_ALL, "Portuguese");
printf("Informe o ano no qual voc� nasceu: ");
scanf("%i", &na);
printf("Informe o dia atual: ");
scanf("%i", &hd);
setlocale(LC_ALL, "Portuguese");
printf("Informe o m�s atual: ");
scanf("%i", &hm);
printf("Informe o ano atual: ");
scanf("%i", &ha);
ndias = (ha - na)*360 + (hm - nm)*30 + (hd - nd);
setlocale(LC_ALL, "Portuguese");
printf("Voc� viveu cerca de: %i", ndias);
	return 0;
}
