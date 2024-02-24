#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
 

 //Um triˆangulo retˆangulo pode ter lados inteiros. O conjunto de trˆes valores inteiros para os lados de
//um triˆangulo retˆangulo ´e chamado de triplo pitag´orico. Esses trˆes lados devem satisfazer a rela¸c˜ao
//de que a soma dos quadrados de dois dos lados ´e igual ao quadrado da hipotenusa. Encontre todos
//os triplos pitag´oricos para cateto1, cateto2 e a hipotenusa, todos com at´e o valor de n, indicado
//como parˆametro.


 void encontraTriplosPitagoricos(int n) 
      printf("Triplos de pitagoricos ate o valor %d:\n", n); 
        for (int cateto1=1; cateto1<=n; cateto1++) {

          for (int cateto2 =cateto1; cateto2<=n; cateto2++) {

             for (int hipotenusa=cateto2; hipotenusa<=n; hipotenusa++) {

                 if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) { 
                    printf("(%d,%d,%d)\n", cateto1, cateto2,hipotenusa); 

                        }
                    }
                }  
            } 
              
    int main() { 
      
        int limite; 
          printf("Digite o valor de n:\n"); 
            scanf("%d", &limite); 
               encontraTriplosPitagoricos(limite);       
return 0; 
} 
