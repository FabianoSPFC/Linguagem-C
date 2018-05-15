1) Sabendo que a função rand() retorna um número aleatório no intervalo de 0 a RAND_MAX (stdlib.h), crie uma função (sem parâmetros e sem 
retorno) que exiba seis dezenas no intervalo [0,99].

//Código//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
void main(){
     int i,n;
     printf("Gerando valores aleatorios:");
     scanf("%d",&n);
     for (i = 0; i < n; i++){
    	printf("\n%d ", rand() % 100);
     }
     getch();
}
