#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>
//Escreva uma função que receba um inteiro e retorne a soma
//de seus dígitos. Por exemplo, dado o número 7631, a função deve retornar
//17.

int somad(int n) {
    int soma = 0;

    
    while (n != 0) {
        soma += n % 10; 
        n /= 10; 
    }

    return soma;
}

int main() {
    setlocale (LC_ALL, "portuguese"); 
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int soma = somad(num);
    printf("A soma dos dígitos de %d é %d.\n", num, soma);

    return 0;
} 
