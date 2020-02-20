#include <stdio.h>
#include "q1_atividadeModulos.h"
#include "q1_atividadeModulos_Funcoes.c"

void main(void){
    
    printf("Celsius: 10, Fah: %.2f\n", converte(10));
    printf("Fatorial de 5: %i", fat(5));
    printf("O comprimento de 'Igor Santos': %i", comprimento("Igor Santos"));
}