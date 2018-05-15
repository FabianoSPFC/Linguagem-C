#include <stdlib.h>
#include <stdio.h>

struct Produto {
	char descricao[55];
	char perecivel;
	float preco;
};

int main() {
	struct Produto produto[5];
	int x;
	float media, percentual, caro, barato;
	caro = 0.0;
	barato = 0.0;
	for (x = 0; x < 5; x++) {
		printf("Produto %d: ", (x + 1));
		printf("\nDescricao do Produto: ");
		gets(produto[x].descricao);
		fflush(stdin);

		printf("\nO Produto e percicivel? ");
		scanf("%c", &produto[x].perecivel);
		fflush(stdin);

		printf("Qual o valor do Produto: ");
		scanf("%f", &produto[x].preco);
		fflush(stdin);
	}
	system("pause");
	return 0;
	
}
