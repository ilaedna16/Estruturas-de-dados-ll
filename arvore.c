#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>

    //Criar estrutura de nó
    // Inserir elementos 
    //Calcular a altura
    //calcular sucessor/antecessor
    //Depurar tudo. 
    struct No
    { 
        int info; 
        struct No *esquerda; 
        struct No *direita;
    }; 
    struct No* criarNo(int info) { 
        struct No* novo= (sruct No*)malloc(sizeof(struct No));
        novo->info=info; 
        novo->esquerda=NULL; 
        novo->direita=NULL;  
        return novo; 
    }
        struct No* inserir(No* raiz, int valor) { 
            if (raiz==NULL) { 
                return criarNo(valor); 
            }else if (valor > raiz-> info){ 
                raiz-> direita = criarNo(valor); 
                   }else if (valor < raiz-> info){
            }
            return raiz; 
                   }
    int main() {
        setlocale (LC_ALL, "portuguese"); 
        struct No* raiz = criarNo(10); 
        raiz->direita = criarNo(20); 
        raiz = inserir(raiz,20); 
         raiz = inserir(raiz,30); 
        return 0; 
    } 
