#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 

//Escreva um programa para somar uma sequência de inteiros e
//calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
//o número de valores a serem inseridos. Seu programa deve ler apenas um
//valor cada vez que scanf é executado. Uma sequência de entrada típica pode
//ser:
//7 678 234 315 489 536 456 367

    int main () { 
        setlocale (LC_ALL, "portuguese"); 

        float n,v,m,soma=0; 

        printf ("Informe a quantidade dos valores do vetor:\n"); 
        scanf("%f", &n); 
            int i; 
            for (i=0; i<n; i++) { 
                printf("Digite o %d elemento\n", i+1);
                scanf ("%f", &v); 
                soma += v; 

            }
                    m= soma/n; 
                    printf ("A soma:%.1f\n", soma); 
                     printf ("A média:%.1f\n", m); 


        return 0; 
    }
