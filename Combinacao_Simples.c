#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
float fat=1, n,p,j, Ar,comb;
printf("Insira a quantidade de elementos no conjunto: ");
scanf("%f", &n);
printf("Insira um valor para o qual deseja calcular o agrupamento: ");
scanf("%f", &p);
fat=p;
for(j=1;j<p;j++){
	fat = (fat * j);
}
printf("\nFatorial calculado: %.0f", fat);
	Ar = n;
	for (j=1;j<p;j++){
		Ar=Ar*(n-j);
	}
printf("\nArranjo calculado: %.0f", Ar);
comb=Ar/fat;
printf("\nCombinacao calculado: %.0f", comb);
return 0;
}
