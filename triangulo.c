Crie uma função (com parâmetro e com retorno) que receba três números inteiros representando os lados de um triângulo e verifique se esses 
três valores podem formar um triângulo

//Código//

int VerificaTria(int L1, int L2, int L3){
	if((L1+l2>l3) && (L2+L3>L1) && (L1+L3>L2))
		return 1; //Verdadeiro
	else
		return 0; //Falso
}
