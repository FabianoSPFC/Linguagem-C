Crie uma função (com parâmetro e com retorno) para verificar se um número é perfeito.

//Código//

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int n,i,res=0,x;
	printf("Digite um numero: ");
	scanf("%d",&n);
	for(i=n;i>1;i--){
		x=n/i;
		if(n%i==0){
			res=res+x;
			printf("\nResposta: %d",x);
			printf("\nResp: %d",res);	
		}
  }
}
