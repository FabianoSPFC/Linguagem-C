#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct hospede { 
    char nome[30];
    char telefone[15];
    int n_hospede;
    bool disponivel;
    
};

struct hospede reservas[30][8];

void Inicializar(){

    int x, y;
   

for (x=0;x<30;x++){
    for (y=0;y<8;y++){
        strcpy(reservas[30][8].nome, " ");
        strcpy(reservas[30][8].telefone, " ");
        reservas[x][y].n_hospede=0;
        reservas[x][y].disponivel=1;
    }
}
system("PAUSE");
}

void Incluir(){
    
    int x,y;
    printf("Digite o Andar: ");
    scanf("%d",&x);
    printf("Digite o Apartamento: ");
    scanf("%d",&y);
    x--;
    y--;
    if (reservas[x][y].disponivel){
        printf("Digite Seu Nome: ");
            fflush(stdin);
        scanf ("%s", &reservas[x][y].nome);
        printf("Digite Seu Telefone: ");
            fflush(stdin);  
        scanf ("%s", &reservas[x][y].telefone);
        printf("Digite o Número de Hospedes no Apartamento Desejado: ");  
        scanf("%d", &reservas[x][y].n_hospede);
        reservas[x][y].disponivel=0;
       }
    else{
        printf("O Apartamento [%d,%d] Está Ocupado\n\n", x+1,y+1);
    }
}

void Alterar(){
    int x,y;
     printf("Digite o Andar: ");
    scanf("%d",&x);
    printf("Digite o Apartamento: ");
    scanf("%d",&y);
    x--;
    y--;
    if (reservas[x][y].disponivel){
        printf("O Apartamento [%d,%d] Está Disponível\n\n", x+1,y+1);
    }else{
         printf("Digite Seu Nome: ");
        fflush(stdin);  
        gets (reservas[x][y].nome);
        printf("Digite Seu Telefone: ");
        fflush(stdin);  
        gets (reservas[x][y].telefone);
        printf("Digite o Número de Hospedes no Apartamento Desejado: ");  
        scanf("%d", &reservas[x][y].n_hospede);
    }
}

void Excluir(){
    int x,y;

    printf("Digite o Andar: ");
    scanf("%d",&x);
    printf("Digite o Apartamento: ");
    scanf("%d",&y);
    x--;
    y--;
    if (reservas[x][y].disponivel){
         printf("O Apartamento [%d,%d] Está Disponível\n\n", x+1,y+1);
        }else{
            strcpy(reservas[30][8].nome, " ");
            strcpy(reservas[30][8].telefone, " ");
            reservas[x][y].n_hospede=0;
            reservas[x][y].disponivel=1;
        }
}

void Listar(){
    int x,y,opc;
    
    printf("1-Consulta por Apartamento\n");
    printf("2-Consulta Todos os Apartamento\n\n");
    printf("Digite sua opção: ");
    scanf("%d", &opc);
    
    switch(opc){
        case 1:
            printf("Digite o Andar: ");
            scanf("%d",&x);
            printf("Digite o Apartamento: ");
            scanf("%d",&y);
            x--;
            y--;
            if (reservas[x][y].disponivel){
                printf("O Apartamento [%d,%d] Está Disponível\n\n", x+1,y+1);
                }else{
                printf("Apartamento [%d,%d]: %s,%s,%d\n", x+1,y+1, reservas[x][y].nome,reservas[x][y].telefone,reservas[x][y].n_hospede);
                }
        break;
        case 2:
            for (x=0;x<30;x++){
                for (y=0;y<8;y++){
                    if (reservas[x][y].disponivel){
                printf("O Apartamento [%d,%d] Está Disponível\n\n", x+1,y+1);
                }else{
                printf("Apartamento [%d,%d]: %s,%s,%d\n", x+1,y+1, reservas[x][y].nome,reservas[x][y].telefone,reservas[x][y].n_hospede);
                }
                }
            }
        break;
        default:
                printf("Operação Inválida\n\n");
        break;
    }
}

main() {
    
    setlocale(LC_ALL, "");

    int opc=0;
    Inicializar();
    
    while(opc !=5 ){
        system("cls");
        printf("\t\t HOTEL SEM-LIMITES \n\n");
        printf("1-Incluir\n");
        printf("2-Alterar\n");
        printf("3-Excluir\n");
        printf("4-Listar\n");
        printf("5-Sair\n\n");
        printf("Digite sua opção: ");
        scanf("%d",&opc);
        
        switch (opc){
            case 1:
                Incluir();
                break;
            case 2:
                Alterar();
                break;
            case 3:
                Excluir();
            break;
            case 4:
                Listar();
            break;
            default:
                printf("Operação Inválida\n\n");
        }
        system("PAUSE");
    }
    
}

