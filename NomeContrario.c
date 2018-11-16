#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
// include<unistd.h>

main(){
	char nome[14];
	int i;
	printf("Digite seu nome: ");
	gets(nome);
	printf("%d\n",strlen(nome));
	for(i=strlen(nome)-1;i>=0;i--){
		printf("%c",nome[i]);
		Sleep(200);
	}
	
}
