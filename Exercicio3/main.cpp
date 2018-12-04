#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int resto(int x, int y);
int main(void);

int resto(int x, int y){
	int q, r;
	q = x/y;
	r = x - q * y;
	return(r);
}

int main(void) {
	int x, anos, dias, y, w, meses, dias;
	printf("Digite os dias: ");
	scanf("%d",&dias);
	x = resto(dias,365);
   if (x==0) 
	{ 
	anos = (dias/365);
	printf("%d ano(s) e 0 mes(es) e 0 dia(s)", anos);
	}
	else
	 {
	anos = (dias/365);
	y = resto(dias,365);			 
	w = resto(y,30);
	 if (w = 0)
	   {
		meses= y/30;
		printf("%d ano(s) e %d mes(es) e 0 dia(s)",anos,meses);
		}
		else 
		{
		anos=dias/365;
		meses=(y/30);
		diass=resto(y,30);
		printf ("%d ano(s) e %d mes(es) e %d dia(s)",anos,meses,dias);
		}
}
system("pause");
return 0;
}
