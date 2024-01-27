#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>

//Escreva um programa que imprima a soma, 
//a soma dos quadrados e a soma dos cubos de todos os números naturais de 1 até qualquer
//número inserido pelo usuário

    int main () { 
        setlocale (LC_ALL, "portuguese"); 
        int soma=0; 
        int squadrados=0; 
        int scubos=0; 
        int n; 

            for (int i=1; i<=n; i++) {
                soma += i; 
                squadrados += i; 
                scubos += i * i * i; 
            } 
            printf ("A soma dos números naturais de 1 até %d: %d\n", n);
            printf ("A soma dos quadrados dos números naturais de 1 até %d: %d\n", n, squadrados); 
             printf ("A soma dos cubos dos números naturais de 1 até %d: %d\n", n, scubos); 
                  
        return 0; 
    }
