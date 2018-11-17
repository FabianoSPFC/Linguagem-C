#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int j,n=10;
	int vo[10]={1,2,3,4,5,6,7,8,9,10};
	int vi[n];
	
	printf("Elementos do vetor na ordem original\n");
	for(j=0;j<10;j++)
		printf("%d\t",vo[j]);
	for(j=0;j<10;j++)
		vi[j]=vo[n-j-1];
		printf("\nElementos do vetor na ordem invertida\n");
	for(j=0;j<10;j++)
		printf("%d\t",vi[j]);
	getch();
	return 0;
}
