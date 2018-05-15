Criar um programa que leia uma lista de cinco elementos e garantir que todos eles sejam números.

//Código//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
main(){
	char vet[5];
	int i,x;
	for(i=0;i<vet;i++){
		printf("Digite Algo\n");
		gets(vet);
		x=atoi(vet);
		if(x==0)
			printf("Nao e um numero\n");
		else
			printf("E um numero!\n");
		}
}
