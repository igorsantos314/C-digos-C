#include <stdio.h>

float converte(float c){
    float f;
    f = 1.8*c + 32;
    return f;
}

int fat(int n){

    if(n == 0)
        return 1;
    else
        return n * fat (n-1);
}

int comprimento(char* s){
    int n = 0;

    for(int i=0; s[i] != '\0'; i++)
        n++;

    return n;
}

void copia(char* dest, char* orig){
    int i;

    for (int i = 0; orig[i] != '\0'; i++)
        dest[i] = orig[i];
    
    dest[i] = '\0';
}

void concatena(char* dest, char* orig){
    int i=0;
    int j;

    while(dest[i] != '\0')
        i++;

    for (j = 0; orig[i] != '\0'; j++)
    {
        dest[i] = orig[i];
        i++;
    }
    
    dest[i] = '\0';
}