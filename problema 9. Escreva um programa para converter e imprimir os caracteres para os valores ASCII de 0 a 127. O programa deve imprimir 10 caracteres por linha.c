#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>
//Escreva um programa para converter e imprimir os caracteres
//para os valores ASCII de 0 a 127. O programa deve imprimir 10 caracteres
//por linha.

int main() {
    int i;

    for (i = 0; i <= 127; i++) {
        
        printf("%c:%d\t", i, i);
    
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    return 0;
}
