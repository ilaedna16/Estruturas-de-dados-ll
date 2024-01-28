#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
//Escreva um programa para converter e imprimir os caracteres
//para os valores ASCII de 0 a 127. O programa deve imprimir 10 caracteres
//por linha.

int main() {
    setlocale (LC_ALL, "portuguese"); 
    int i;
    printf("-------------------------------");
    printf("Caracteres ASCII de 0 a 127:\n ");
   

    for (i=0; i<=128; i++) { 
        printf("%3d: %c",i); //quebra de linha 
        if ((i+1) % 10==0) 
        printf ("\n"); 
    }
    return 0;
}
