/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Aula-16-sabado-Exercícios
2- Criar um algoritmo que leia os elementos de
uma matriz inteira de 3 x 3 e imprimir todos os
elementos, exceto os elementos da diagonal principal.*/

#include <stdio.h>

int main() {
    int tamanho = 3;
    int matriz[tamanho][tamanho];

    puts("Digite um numero de cada vez para formar a matriz: ");
    for(int linha=0;linha<tamanho;linha++){
        for(int coluna=0;coluna<tamanho;coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    printf("\nNumeros que nao estao na diagonal principal:\n");
    for(int linha=0;linha<tamanho;linha++){
        for(int coluna=0;coluna<tamanho;coluna++) {
            if (linha != coluna)
                printf("%d ", matriz[linha][coluna]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}