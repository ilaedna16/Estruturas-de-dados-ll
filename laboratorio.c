#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Escreva dois programas que recebem como parˆametro trˆes inteiros representando os coeficientes
//de uma fun¸c˜ao do segundo grau e execute:
//(a) O teste para saber se essa fun¸c˜ao tem ra´ızes reais;
//(b) O valor das ra´ızes reais.

    int temRaizesReais(int a, int b, int c) { 
        int delta = b*b-4*a*c; 
        return delta>=0; 

    }
 
 int main() { 
    setlocale(LC_ALL, "portuguese"); 
        int a, b, c; 
        printf("Digite os coeficientes de (a,b,c) da função do segundo grau:\n"); 
           scanf("%d %d %d",&a,&b,&c); 
        
            if (temRaizesReais(a,b,c)) { 
                printf("A função do segundo grau tem raizes reais!\n"); 
            }else{ 
                printf("Não tem raizes reais:\n"); 

            }
   return 0;   

} 

    void calculaRaizReais(int a, int b, int c) { 
        int delat = b*b-4*a*c;
        
        if (delta >= 0) { 
            double raiz1= (-b+sqrt(delta)) | (2.0*a); 
            double raiz2= (-b-sqrt(delta)) | (2.0*a); 
        }
    }
 int main() { 
 
        int a, b, c; 
            printf("Digite os coeficientes (a, b, c) da função do segundo grau:\n"); 
              scanf("%d %d %d",&a,&b,&c); 
              calculaRaizReais(a,b,c); 

    return 0;
    }
