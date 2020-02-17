#include "func.h"

void getInfo(){
    char nome[50];
    char sobrenome[50];
    int ano, cpf, rg;

    printf("Digite seu Nome: ");
    scanf("%s", nome);

    printf("Digite seu Sobrenome: ");
    scanf("%s", sobrenome);

    printf("Digite seu ano de Nascimento: ");
    scanf("%d", &ano);
    
    printf("Digite seu CPF: ");
    scanf("%d", &cpf);

    printf("Digite seu RG: ");
    scanf("%i", &rg);

    //chamar funcao enviando os dados
    exibirInfo(nome, sobrenome, ano, cpf, rg);
}

int getIdade(int ano){
    return 2020 - ano;
}

void exibirInfo(char *nome, char *sobrenome, int ano, int cpf, int rg){

    int idade = getIdade(ano);

    printf("\nNome: %s\n",nome);
    printf("Sobrenome: %s\n",sobrenome);
    printf("Ano de Nascimento: %i\n",ano);
    printf("Idade: %i\n",idade);
    printf("CPF: %i", cpf);
    printf("RG: %i\n\n", rg);
}

void cabecalho(){

    printf("            ===========================\n");
    printf("            == 0 - Sair              ==\n");
    printf("            == 1 - Realizar Cadastro ==\n");
    printf("            ===========================\n");
}