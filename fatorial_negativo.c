3) Crie um programa com uma função (com parâmetro e com retorno) que retorne o fatorial de um inteiro não negativo informado.

//Código//

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

long int fatorial(int N);
int main(){
	long int fat, N;
	
	printf("Informe o Valor de N: \n");
	scanf("%d",&N);
	
	fat = fatorial(N);
	printf("Fatorial de %d = %d", N,fat);
	getch();
	return 0;
}

long int fatorial (int N){
	if (N<=0)
		return 1;
	else
		return (N*fatorial(N-1));
}
