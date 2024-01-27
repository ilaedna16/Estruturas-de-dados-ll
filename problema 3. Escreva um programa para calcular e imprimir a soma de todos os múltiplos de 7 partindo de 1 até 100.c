#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>

//Escreva um programa para calcular e imprimir a soma de todos
//os múltiplos de 7 partindo de 1 até 100.

    int main () { 
        setlocale (LC_ALL, "portuguese"); 
        int i, soma=0; 


        
            for (i=1; i<=100; i++) { 
                if (i%7==0) { 
                    soma += 1; 
                }
            } 
                     printf ("A soma dos números multiplicados de 7%.1d\n", soma);

        return 0; 
    }
