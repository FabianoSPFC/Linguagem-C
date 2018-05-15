Crie um programa que leia um nome e imprima apenas os caracteres que ocupam as posições pares no nome.

//Código//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
main(){
	char nome[51];
	int j=0, tam, pos=0;
	printf("Digite um nome: ");
	gets(nome);
	printf("Nome: %s ", nome);
	tam=strlen(nome);
	printf("Letras nas posicoes pares: \n");
	while(j<tam){
		if(j%2!=0){
			printf("%c", nome[j]);
			j++;
		}
	}
	getch();
	return 0;
}
