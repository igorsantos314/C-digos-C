#include <stdio.h>
#include <stdlib.h>

//Definir uma função que recebe uma estrutura e retorn uma estrutura
struct carro teste(struct carro x);

struct carro
{
    int rodas;
    int portas;
    char cor;
};

int main(void){

    struct carro Palio, celta;
    
    Palio.cor = 'V';
    Palio.portas = 4;
    Palio.rodas = 4;

    celta = teste(Palio);
    
    return 0;
}

struct carro teste(struct carro x){

    printf("Cor: %c; Portas: %i; Rodas: %i", x.cor, x.portas, x.rodas);

    return x;
}