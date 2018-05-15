2) Baseado nesses conceitos, crie uma função (sem parâmetros e sem retorno) que exiba quantas combinações com 4 elementos podem ser 
montadas com todas as 26 letras do alfabeto.

//Código//

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void combinacao();
int main(){
	combinacao();
	getch();
	return 0;
}

void combinacao(){
	int j, anp=0;
	int n=26, p=4;
	double pp,cnp;
	
	anp = n;
	for (j=1;j<p;j++){
		anp=anp*(n-j);
		printf("\nANP: %d",anp);
	}
	pp=p;
	for(j=1;j<p;j++){
		pp=pp*j;
		printf("\nPP: %lf",pp);
	}	
	cnp = anp/pp;
	
	printf("\ncnp %.lf \n",cnp);
}
