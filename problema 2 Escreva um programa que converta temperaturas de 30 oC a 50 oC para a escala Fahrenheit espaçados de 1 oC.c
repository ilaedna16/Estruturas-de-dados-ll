#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>

//Escreva um programa que converta temperaturas de 30 oC a
//50 oC para a escala Fahrenheit espaçados de 1
//oC. O programa deve imprimir
//uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica:
//F = C + 32]

    int main () { 
        setlocale (LC_ALL, "portuguese"); 
        int c; 
        float f;  
            for (c=30; c<=50; c++) { 
                
            f = c + 32; 
                     
        printf ("| %.1f graus Fahrenheit| %d graus Celsius| \n", f,c);

            } 
        return 0; 
    }
