#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main() {

	enum Dias { Dom = 1, Seg = 2, Ter = 3, Qua = 4, Qui = 5, Sex = 6, Sab = 7 } Hoje;
	char dia[13]={"			"};
	int j = 0;
	while ((j < 1) || (j > 7)) {
		printf("Entre com o dia da semana de 1 a 7: ");
		scanf_s("%d", &j);
	}
	Hoje = Dias(j);
	switch (Hoje) {
	case 1:
		strcpy_s("Domingo", dia);
		break;
	case 2:
		strcpy_s(dia, "Segunda");
		break;
	case 3:
		strcpy_s(dia, "Terça");
		break;
	case 4:
		strcpy_s(dia, "Quarta");
		break;
	case 5:
		strcpy_s(dia, "Quinta");
		break;
	case 6:
		strcpy_s(dia, "Sexta");
		break;
	case 7:
		strcpy_s(dia, "Sabado");
		break;
	};
	printf("\n%s\n", dia);
	if (Hoje == Sab || Hoje == Dom)
		printf("Legal! Fim de Semana\n");
	else
		printf("Puxa! Ainda dia de trabalho\n");
	getch();
	return 0;
	system("pause");
}
