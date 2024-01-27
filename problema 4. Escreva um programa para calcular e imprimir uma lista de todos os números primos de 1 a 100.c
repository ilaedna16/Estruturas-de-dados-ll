#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>

//Escreva um programa para calcular e imprimir uma lista de
//todos os números primos de 1 a 10

    int main () { 
        setlocale (LC_ALL, "portuguese"); 
        int i, j, primo;  
            printf ("Número primo de 1 á 100\n");
            for (i=2; i<=100; i++) {
                primo = 1; 
                 for (j=2; i<=i/2; j++) {
                primo =0; 
                break; 
                 }
            } 
                  if (primo==1) { 

                     printf ("%d", i);

                  }   
        return 0; 
    }
