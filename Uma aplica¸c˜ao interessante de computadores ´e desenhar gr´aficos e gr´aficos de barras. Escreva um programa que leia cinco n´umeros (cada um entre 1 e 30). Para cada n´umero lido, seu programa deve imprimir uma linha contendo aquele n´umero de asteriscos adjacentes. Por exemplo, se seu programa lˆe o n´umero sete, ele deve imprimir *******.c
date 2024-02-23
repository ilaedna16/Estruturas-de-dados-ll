#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

//Uma aplica¸c˜ao interessante de computadores ´e desenhar gr´aficos e gr´aficos de barras. Escreva um
//programa que leia cinco n´umeros (cada um entre 1 e 30). Para cada n´umero lido, seu programa
//deve imprimir uma linha contendo aquele n´umero de asteriscos adjacentes. Por exemplo, se seu
//programa lˆe o n´umero sete, ele deve imprimir *******.


int main() {
    setlocale (LC_ALL, "portuguese"); 
    int n, aux; 
        for (int i=0; i<5; i++)
 { 
    do{
        printf("Diigte cinco números entre 1 e 30:\n"); 
        scanf("%d", &n); 

        if (n<1 || n>30) { 
            printf("Número fora do intervalo!:"); 
        }
            while(n<1 || n>30); 
                for (int J=0; J<5; J++)
                    printf("*");
    }
                    printf("\n"); 
 } 

return 0; 
} 
