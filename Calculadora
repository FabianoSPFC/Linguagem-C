#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

void Basica() {
	double x,y,a,b,c;
	float soma,sub,multi,div,pot,eq,rq,Del, baska,bask;
	int Tipo; 
	
	printf("\nQual o tipo de cálculo que você deseja fazer?\n\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Potenciação\n6-Equação do 2ºGrau\n7-Raiz\n\n");
	printf("Digite sua opção: ");
    scanf("%d", &Tipo);
    
	switch (Tipo){
	case 1:
		printf("\nDigite o valor de x : ");
		scanf("%lf", &x);
		printf("\nDigite o valor de y : ");
		scanf("%lf", &y);
		soma = x + y;
		printf("\nO resultado da Soma foi %.2f\n", soma);	
	break;
	case 2: 
		printf("\nDigite o valor de x : ");
		scanf("%lf", &x);
		printf("\nDigite o valor de y : ");
		scanf("%lf", &y);
		sub = x - y;
		printf("\nO resultado da Subtração foi %.2f\n", sub);	
	break;
	case 3: 
		printf("\nDigite o valor de x : ");
		scanf("%lf", &x);
		printf("\nDigite o valor de y : ");
		scanf("%lf", &y);
		multi = x * y;
		printf("\nO resultado da Multiplicação foi %.2f\n", multi);	
	break;
	case 4: 
		printf("\nDigite o valor de x : ");
		scanf("%lf", &x);
		printf("\nDigite o valor de y : ");
		scanf("%lf", &y);
			if (y==0){
				printf ("Nao é possivel dividir por zero!!!");
			}
			else{
				div = x/y;
				printf("O Resultado da Divisão é: %.2f\n",div);
			}
	break;
	case 5: 
		printf("\nDigite o valor de x : ");
		scanf("%lf", &x);
		printf("\nDigite o valor de y : ");
		scanf("%lf", &y);
		pot = pow(x,y);
		printf("\nO resultado da Potenciação foi %.2f\n", pot);	
	break;
	case 6: 
		printf("Digite o Valor de A: ");
    	scanf("%lf", &a);

    	printf("Digite o Valor de B: ");
    	scanf("%lf", &b);

    	printf("Digite o Valor de C: ");
    	scanf("%lf", &c);

    	Del=pow(b,2)-4*a*c;

    	printf("Delta é Igual a: %.2f", Del);
    	if (Del>0){
      		baska=(-b+sqrt(Del))/(2*a);
      		printf("\nX1 é Igual a: %.2f", baska);
      		bask=(-b-sqrt(Del))/(2*a);
      		printf("\nX2 é Igual a: %.2f", bask);
    	}else
      		printf("\nNão da pra calcular bascara, tente outros valores");	
	break;
	case 7: 
		printf("\nRaiz de: ");
		scanf("%lf", &x);
		printf("\nNa Base: ");
		scanf("%lf", &y);
		rq = pow(x,(1/y));
		printf("\nO resultado da Raiz Quadrada foi %.2lf\n", rq);	
	break;
	default:
		printf("Preste Atenção nos Números e Tente Novamente",Tipo);
	break;
}
	
}

void Angulo(){
	double x,y;
	int Tipo2;
	float Ang_Sen,Ang_Cos,Ang_Tan,pi=3.1415;
	
	printf("\nQual Âgulo você quer calcular?\n\n1-Seno\n2-Cosseno\n3-Tangente\n0-Voltar Ao Menu Anterior\n\n");
	printf("Digite sua opção: ");
	scanf("%d",&Tipo2);
	
	switch(Tipo2){
	case 1:
		printf("\nQual o valor do Ângulo desejado? ");
		scanf("%lf",&x);
  		Ang_Sen=sin(x*pi/180);
		printf("\nO Seno do Ângulo obtido foi de : %.2f\n\n", Ang_Sen);
	break;
	case 2:
		printf("\nQual o valor do Ângulo desejado? ");
		scanf("%lf",&x);
		Ang_Cos = cos(x*pi/180);
		printf("\nO Cosseno do Ângulo obtido foi de : %.2f\n\n", Ang_Cos);
	break;
	case 3:
		printf("\nQual o valor do Ângulo desejado? ");
		scanf("%lf",&x);
		Ang_Tan=tan(x*pi/180);
		printf("\nA Tangente do Ângulo obtido foi de : %.2f\n\n", Ang_Tan);
	break;
	default:
		printf("Preste Atenção nos Números e Tente Novamente",Tipo2);
	break;
	}

}
void Porcentagem(){
	int Tipo3;
	double num, x, res, porc;
	
	printf("\nQual o número que voce deseja fazer a porcentagem ? ");
	scanf("%lf", &num);
	printf("Quantos Porcentos ? ");
	scanf("%lf", &x);

	porc=x/100;
	res=porc*num;
	printf("\nO Resultado da Porcentagem foi %.2lf\n", res);

}

void Conversao(){
	double Kel, Far, Cel,x;
	int Tipo4;
	printf("\n\nQual a conversão que voce quer?\n\n1-Celsius Para Kelvin\n2-Celsius Para Fahrenheit\n3-Kelvin Para Fahrenheit\n4-Kelvin Para Celsius\n5-Fahrenheit Para Celsius\n6-Fahrenheit Para Kelvin\n0-Voltar Ao Menu Anterior\n\n");
	scanf("%d",&Tipo4);

	switch	(Tipo4){
	
	case 1:
		printf("\nQual o Valor de Celsius? ");
		scanf("%lf",&x);
		Kel = (x + 273);
		printf("\nA Temperatura de Celsius Para Kelvin é: %.2lf\n", Kel);
	break;
	case 2:
		printf("\nQual o Valor de Celsius? ");
		scanf("%lf",&x);
		Far = ((9*x + 160)/5);
		printf("\nA Temperatura de Celsius Para Fahrenheit é: %.2lf\n",Far);
	break;
	case 3:
		printf("\nQual o Valor de Kelvin? ");
		scanf("%lf",&x);
		Far = ((9*x - 2297)/5);
		printf("\nA Temperatura de Kelvin Para Fahrenheit é: %.2lf\n",Far);
	break;
	case 4:
		printf("\nQual o Valor de Kelvin? ");
		scanf("%lf",&x);
		Cel = (x - 273);
		printf("\nA Temperatura de Kelvin Para Celsius é: %.2lf\n",Cel);
	break;
	case 5:
		printf("\nQual o Valor de Fahrenheit? ");
		scanf("%lf",&x);
		Far = ((5*(x - 32))/9);
		printf("\nA Temperatura de Fahrenheit Para Celsius é: %.2lf\n ",Far);
	break;
	case 6:
		printf("\nQual o valor de Fahrenheit? ");
		scanf("%lf",&x);
		Kel = ((5*x + 2297)/9);
		printf("\nA Temperatura de Fahrenheit Para Kelvin: %.2lf\n",Kel);
	break;
	default:
		printf("Preste Atenção nos Números e Tente Novamente",Tipo4);
	break;	
	}	
}

void GP(){/*Geometria Plana*/
	double Perimetro,Comprimento,Area,Altura,Diagonal,diagonal,Base,base,Raio,A,B,C,D,pi=3.1415;
	int Tipo5;
	
	printf("\nQual o Poligono?\n\n1-Quadrado\n2-Retangulo\n3-Triangulo\n4-Paralelogramo\n5-Losangulo\n6-Trapezio\n7-Circulo\n0-Voltar Ao Menu Anterior\n\n");
	scanf("%d",&Tipo5);

	switch (Tipo5){
	case 1:
		printf("Qual o valor de A? ");
		scanf("%lf",&A);
		Perimetro=4*A;
		Area=pow(A,2);
		printf("\nO Perimetro foi de : %.2f e Área desse Poligono é : %.2f \n", Perimetro,Area );
	break;
	case 2:
		printf("Qual o valor de A? ");
		scanf("%lf",&A);
		printf("Qual o valor de B? ");
		scanf("%lf",&B);
		Perimetro=2*A+2*B;
		Area=A*B;
		printf("\nO Perimetro foi de : %.2f e Área desse Poligono é : %.2f \n", Perimetro,Area );
	break;
	case 3:
		printf("Qual o valor de A? ");
		scanf("%lf",&A);
		printf("Qual o valor de B? ");
		scanf("%lf",&B);
		printf("Qual o valor de C? ");
		scanf("%lf",&C);
		printf("Qual a Altura? ");
		scanf("%lf",&Altura);
		Perimetro=A+B+C;
		Area=(A*Altura)/2;
		printf("\nO Perimetro foi de : %.2f e Área desse Poligono é : %.2f \n", Perimetro,Area );
	break;
	case 4:
		printf("Qual o valor de A? ");
		scanf("%lf",&A);
		printf("Qual o valor de B? ");
		scanf("%lf",&B);
		printf("Qual a Altura? ");
		scanf("%lf",&Altura);
		Perimetro=2*A+2*B;
		Area=A*Altura;
		printf("\nO Perimetro foi de : %.2f e Área desse Poligono é : %.2f \n", Perimetro,Area );
	break;
	case 5:
		printf("Qual o valor de A? ");
		scanf("%lf",&A);
		printf("Qual o valor da Diagonal Maior? ");
		scanf("%lf",&Diagonal);
		printf("Qual o valor da Diagonal Menor? ");
		scanf("%lf",&diagonal);
		Perimetro=4*A;
		Area=(Diagonal*diagonal)/2;
		printf("\nO Perimetro foi de : %.2f e a Área desse Poligono é : %.2f \n", Perimetro,Area );
	break;			
	case 6:
		printf("Qual o valor de C? ");
		scanf("%lf",&C);
		printf("Qual o valor da Base Menor? ");
		scanf("%lf",&base);
		printf("Qual o valor de D? ");
		scanf("%lf",&D);
		printf("Qual o valor da Base Maior? ");
		scanf("%lf",&Base);
		printf("Qual o valor da Altura? ");
		scanf("%lf",&Altura);
		Perimetro=C+base+D+Base;
		Area=((Base+base)*Altura)/2;
		printf("\nO Perimetro foi de : %.2f e Área desse Poligono é : %.2f \n", Perimetro,Area );
	break;
	case 7:
		printf("Qual o valor do Raio? ");
		scanf("%lf",&Raio);
		Comprimento=2*pi*Raio;
		Area=pi*pow(Raio,2);
		printf("\nO Comprimento foi de : %.2f e Área desse Poligono é : %.2f \n", Comprimento,Area );
	break;
	default:
		printf("Preste Atenção nos Números e Tente Novamente",Tipo5);
	break;	
	}
}

void GE(){/*Geoemetria Espacial*/
	double Area_Base, Area_Lateral, Area_Total, Volume, Raio; 
	double Altura,G,Area_Superficial,pi=3.1415;
	int Tipo6;
	printf("\nQual Tipo de Poligono que você quer usar?\n\n1-Cilindro\n2-Espera\n3-Cone\n0-Voltar Ao Menu Anterior\n\n");
	scanf("%d",&Tipo6);
		
	switch (Tipo6){
	case 1:
		printf("\nQual o valor do Raio? ");
		scanf("%lf",&Raio);
		printf("Qual o valor da Altura? ");
		scanf("%lf",&Altura);
		Area_Base=pi*pow(Raio,2);
		Area_Lateral=2*pi*Raio*Altura;
		Volume=pi*pow(Raio,2)*Altura;
		printf("\nA Área da Base desse Poligono é : %.2f , A Área Lateral dele é: %.2f e o Volume dele é: %.2f \n", Area_Base, Area_Lateral, Volume );
	break;
	case 2:
		printf("\nQual o valor do Raio? ");
		scanf("%lf",&Raio);
		Area_Superficial=4*pi*pow(Raio,2);
		Volume=(4/3)*pi*pow(Raio,3);
		printf("\nA Área Superficial desse Poligono é : %.2f e o Volume dele é: %.2f \n", Area_Superficial, Volume );
	break;
	case 3:
		printf("\nQual o valor do Raio? ");
		scanf("%lf",&Raio);
		printf("Qual o valor da Giretriz? ");
		scanf("%lf",&G);
		printf("Qual o valor da Altura? ");
		scanf("%lf",&Altura);
		Area_Lateral=pi*Raio*G;
		Area_Base=pi*pow(Raio,2);
		Volume=(pi*pow(Raio,2)*Altura)/3;
		printf("\nA Área da Base desse Poligono é : %.2f , A Área Lateral dele é: %.2f e o Volume dele é: %.2f \n", Area_Base, Area_Lateral, Volume );
		
	break;
	default:
		printf("Preste Atenção nos Números e Tente Novamente",Tipo6);
	break;
			}
	printf("Quer Continuar ?\n\n1-Sim\n2-Não");
	scanf("%d",&Tipo6);
	if (Tipo6 ==1 ){
		return GE();
	}else{
		system("PAUSE");
	}
}
void IMC(){
	int Tipo7;
	char sexo;
	float imc,p,h,tot;
	
 	printf("Digite seu sexo: ");
	fflush(stdin);
	scanf("%c", &sexo);
	printf("Digite o valor do Peso: ");
	scanf("%f", &p);
	printf("Digite o valor da Altura, Coloque Vírgula ao invés de Ponto: ");
	scanf("%f", &h);

	imc=p/(pow(h,2));
	
	printf("\nO seu imc foi de: %.2f\n\n", imc);
	
	if (imc<18.5){
			printf("Abaixo do Peso\n", imc);	
		}else{
				if ((imc>=18.5) && (imc<24.9)){
					printf("Peso Normal\n");
		}else{	if((imc>=25) && (imc<29)){
					printf("Sobrepeso", imc);
		}else{		
				if (imc>= 30 && imc<34.9){
				printf("Obesidade de Grau 1\n",imc);
		}else{
				if (imc>=35 && imc<39.9){
					printf("Obesidade de Grau 2\n",imc);
		}else{
			if (imc>40)
				printf("Obesidade de Grau 3\n",imc);
	
				}
			}		
		}
	}
}
	if ((sexo == 'm') || (sexo == 'M') || (sexo == 'f') || (sexo =='F')){
			if ((sexo == 'M') || (sexo == 'm'))
				tot=(72.7*h)-58;	
	else 
		if ((sexo == 'F') || (sexo == 'f'))
			tot=(62.1*h)-44.7;
			printf("\nO seu peso ideal para o sexo %c foi de: %.2f \n\n",sexo, tot);
	}else{
		printf("\nValor Incorreto, Tente Novamente!!\n");
	} 
}
void Media(){
	float notas[5], total=0,media=0;
	int i;
	printf("Insira 5 notas:\n");
	for(i=0;i<5;i++){
		scanf("%f",&notas[i]);
	}
		for(i=0;i<5;i++){
			total = total + notas[i];
		}		
	printf("total = %.2f\n",total);
	media = total/5;
	printf("A media do aluno: %.2f ", media);
}

main() {
    setlocale(LC_ALL, "");
	int Tipo; 
	printf("Bem Vindo à Calculadora Virtual !!\n\n");
	printf("Você quer fazer um cálculo de qual assunto?\n\n1-Matemática Básica\n2-Ângulos\n3-Porcentagem\n4-Conversão de Temperatura\n5-Geometeria Plana\n6-Geometria Espacial\n7-IMC\n8-Média\n0-Sair\n");
	scanf("%d", &Tipo);
		
	if ((Tipo>8)|| (Tipo<0))
		printf("Olhe os números dísponiveis e tente novamente!!\n");
	while (Tipo<=8){        
	switch (Tipo){
	    case 1:
	        Basica();
	        return main();
	        break;
	    case 2:
	        Angulo();
	        return main();
	        break;
	    case 3:
	        Porcentagem();
	        return main();
	    break;
	    case 4:
	        Conversao();
	        return main();
	    break;
	    case 5:
	    	GP();
	    	return main();
	    break;
	    case 6:
	    	GE();
	    	return main();
	    case 7:
	    	IMC();
	    	return main();
	    case 8:
	    	Media();
	    	return main();
	    case 0:
	    	return 0;
	    break;
		default:
	        printf("Operação Inválida\n\n");
	    break;
		}
    }    
}
