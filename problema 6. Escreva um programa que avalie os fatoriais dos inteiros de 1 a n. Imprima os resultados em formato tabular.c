#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
//A função fatorial é freqüentemente usada em problemas de
//probabilidade. O fatorial é igual ao produto dos inteiros positivos de 1 a n.
//Escreva um programa que avalie os fatoriais dos inteiros de 1 a n. Imprima
//os resultados em formato tabular.

int fat(int n) {
    if (n == 0)
        return 1;
    else
        return n * fat(n - 1);
}

void imprimirFat(int n) {

    printf("Os fatoriais de 1 a %d:\n", n);
    printf("----------------------\n");
    for (int i = 1; i <= n; i++) {
        printf("%d! = %d\n", i, fat(i));
    }
}

int main() {
    setlocale (LC_ALL, "portuguese"); 
    int n;
    printf("Digite o valor de n:\n ");
    scanf("%d", &n);
    imprimirFat(n);
    return 0;
}
