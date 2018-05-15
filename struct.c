#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Produto {
	int codigo;
	char descricao[55];
	char perecivel[1];
	float preco;
};

int main() {
	struct Produto produto[3];
	int x;
	float media=0, percentual, caro, barato, res;
	caro = 0.0;
	barato = 9999999999999.0;
	for (x = 0; x < 3; x++) {
		printf("Produto %d: ", (x + 1));

		printf("\nCodigo do Produto: ");
		scanf("%d", &produto[x].codigo);
		fflush(stdin);

		printf("\nDescricao do Produto: ");
		gets(produto[x].descricao);
		fflush(stdin);

		printf("\nO Produto e percicivel? S=Sim ou N=Nao\n");
		scanf("%c", &produto[x].perecivel);
		fflush(stdin);

		printf("Qual o valor do Produto: ");
		scanf("%f", &produto[x].preco);
		fflush(stdin);

		if (produto[x].perecivel == 's') {
			x = x + 1;
		}

		media = produto[x].preco + media;

		if (produto[x].preco>caro) {
			caro = produto[x].codigo;
			strcpy(caro, produto[x].descricao);
		}
		if (produto[x].preco<barato) {
			barato = produto[x].codigo;
			strcpy(barato, produto[x].descricao);
		}
	}

	res = (j / 3) * 100;
	media = media / 3;
	printf("A Media foi: ", media);
	printf("O Produto mais caro e o do codigo: %f ", caro);
	printf("O Produto mais barato e o do codigo: %f ", barato);
	printf("O Percentual do produto perecivel: %f ", res);
	system("pause");
	return 0;

}
