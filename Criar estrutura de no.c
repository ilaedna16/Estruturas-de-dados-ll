#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>

    //Criar estrutura de nó
    // Inserir elementos 
    //Calcular a altura
    //calcular sucessor/antecessor
    //Depurar tudo. 
    struct no
    { 
        int info; 
        struct no *esquerda; 
        struct no *direita;
    }; 

    int main() {
        setlocale (LC_ALL, "portuguese"); 
  struct no raiz = (struct no*)malloc(sizeof(struct no)); 
        raiz->info=10; 
        raiz->esq=NULL; 
        raiz->dir = (struct no*)malloc(sizeof(struct no));
        raiz->dir->inf =20; 
        raiz->dir->esq=NULL; 
        raiz->esq=NULL; 

        return 0; 
    }   
