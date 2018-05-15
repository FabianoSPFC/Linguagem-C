2) Ler um vetor de quatro elementos inteiros; apresentá-los na ordem lida e na ordem crescente, exiba o maior valor lido (Método da Bolha).

//código//

#include<stdio.h>
#include<conio.h>

int main(){
	int v[4], i, j, aux;
	for(j=0;j<4;j++){
		printf("Elemento %d do vetor: ", (j+1));
		scanf("%d",v[j]);
	}
	for(j=0;j<4;j++){
		printf("%s %d"," ", v[j]);
	}
	for(i=0;i<4-1;i++){
		for(j=(i+1);j<4;j++){
			if(v[i]>v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}		
		}
	}
	for(j=0;j<4;j++){
		printf("%s %d"," ", v[j]);
	}
	printf("\nMaior Vetor: %d ", v[3]);
	getch;
	return 0;
}
