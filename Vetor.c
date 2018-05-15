Leia um vetor de dez elementos inteiros e construa um segundo vetor cujos elementos serão os dobros de cada elemento do vetor lido.

//Código//

#include<stdio.h>
#include<stdlib.h>

int main(){
	int V1[10], V2[10];
	int j;
	
	for(j=0;j<10;){
		printf("Digite o elemento %d: ", (j+1));
		scanf("%d",&V1[j]);
		V2[j]=2*V1[j];
	}
	for(j=0;j<10;j++){
		printf("%d %s", V1[j], " ");
	}
	for(j=0;j<<10;j++){
		printf("%d %s", V2[j], " ");
	}
	getch();
	return 0;
}
