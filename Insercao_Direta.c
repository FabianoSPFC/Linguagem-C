3) Ler um vetor de quatro elementos inteiros; apresentá-los na ordem lida e em seguida em ordem crescente (Método de Inserção Direta).

//Código//

#include<stdio.h>
#include<conio.h>

int main(){
	int i, j, elemento;
	int vet[4]={8,4,6,2};
	
	for(j=0,j<4;j++){
		printf("%d %s", vet[j], " ");
	}
	for(i=0,i<4;i++){
		elemento=vet[i];
	
	while((j>=0) && (elemento<vet[j]){
		vet[j+1]=vet[j];
		j=j-1;
	}
	vet[j+1]=elemento;
}
	for(j=0,j<4;j++){
		printf("%d %s", vet[j], " ");
	}
	getch();
	return 0;
}
