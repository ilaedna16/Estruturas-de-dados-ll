#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
 //Escreva uma função que exibe um retângulo sólido de asteriscos cujos lados 
 //são especificados nos parâmetros inteiros lado1 e lado2.  Por
//exemplo, se os lados são 4 e 5, a função exibe o seguinte:



    void exibirRetangulo (int lado1, int lado2) { 
        int i, j; 
        for (i=0; i<lado1; i++) { 
            for (j=0; j<lado2; j++){ 
                printf("*");
            }
            printf ("\n"); 

        }
    }
int main() {
    setlocale (LC_ALL, "portuguese"); 
    int lado1, lado2; 
    
    printf("Digite o comprimento do lado 1:\n ");
    scanf ("%d",&lado1); 
    printf("Digite o coprimento do lado 2:");
    scanf("%d",&lado2);  

    exibirRetangulo(lado1, lado2); 
    
      printf ("O comprimento do lado 1 é:%.1d\n", lado1); 
      printf ("O comprimento do lado 2 é:%.1d\n", lado2);

    return 0;
}
