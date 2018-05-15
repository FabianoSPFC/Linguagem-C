4) Crie um programa com uma função (com parâmetro e com retorno) que retorne a raiz de um número e índice informado.

//Código//

#include<stdio.h>
#include<conio.h>
#include<math.h>

float Raiz(float N, float i);

int main(){
	float num, raiz, ind;
	printf("Digite um numero: ");
	scanf("%f",&num);
	printf("Digite o indice da raiz: ");
	scanf("%f",&ind);
	raiz=Raiz(num,ind);
	printf("Raiz %1.0f de %1.0f : $4.2f\n",ind,num,raiz);
	getch();
	return 0;
}

float Raiz(float N, float i){
	float r;
	r=pow(N,(1/i));
	return r;
}
