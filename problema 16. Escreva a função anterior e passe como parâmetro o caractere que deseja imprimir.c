#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>
 
 //Escreva a função anterior e passe como parâmetro o caractere
//que deseja imprimir


    void exibirRetangulo(int lado1, int lado2, char caractere) { 
        int i, j; 
        for (i=0; i<lado1; i++) { 
            for (j=0; j<lado2; j++){ 
                printf("%c", caractere);
            }
            printf ("\n"); 

        }
    }
int main() {
      setlocale (LC_ALL, "portuguese");
   
    int lado1, lado2; 
    char caractere; 

    printf("Digite o comprimento do lado 1:\n ");
    scanf ("%d",&lado1); 
    printf("Digite o coprimento do lado 2:\n");
    scanf("%d",&lado2);  
    printf("Digite o caractere que deseja usar\n:");
    scanf("%c",&caractere); 

     exibirRetangulo(lado1, lado2, caractere); 

    return 0;
}
