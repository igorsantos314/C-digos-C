#include <stdio.h>
#include "func.h"
#include "cadastro.c"

void main(void){
    //iniciar pega de informações
    int opc = 0;

    do
    {
        cabecalho();

        printf("            --> Selecione: ");
        scanf("%d", &opc);

        switch (opc)
        {   
            case 0:
                printf("\n\n               Bye Bye !\n");
                break;

            case 1:
                getInfo();
                break;
            
            default:
                printf("\n\n ------> Por favor, selecione alguma opcao! <------\n\n");
                break;
        }

    }while (opc != 0);

    
}
