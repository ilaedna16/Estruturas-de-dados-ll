#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
//Uma aplicação interessante de computadores é desenhar gráficos e gráficos de barras. 
//Escreva um programa que leia cinco números 
//(cadaum entre 1 e 30). Para cada número lido, seu programa deve imprimir uma
//linha contendo aquele número de asteriscos adjacentes. Por exemplo, se seu
//programa lê o número sete, ele deve imprimir. 

int main() {
    setlocale (LC_ALL, "portuguese"); 
    int num[5]; 
    int i, j; 

        printf ("Digite cinco números entre 1 e 30:\n"); 
        for (i = 0; i < 5; i++) {

        printf ("num%d",i+1); 
        scanf ("%d", &num[i]);
         if ((num[i] < 1 || num[i] > 30)) { 
            printf ("Número inválido! Insira um número de 1 a 30:\n");
            i--; 
         }
}
printf ("Linhas de asteriscos:\n"); 
      for (i = 0; i < 5; i++) {
        printf ("Número %d: \n", num[i]); 
         for (j = 0; j < num[i]; j++) {
            printf("*"); 
         } 
         printf ("\n"); 
      } 

    return 0;
}
