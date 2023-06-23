/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Aula-16-sabado-Exercícios
3- Criar um algoritmo que leia os elementos de
uma matriz inteira de 3 x 3 e imprimir outra
matriz multiplicando cada elemento da primeira
matriz por 2.*/

#include <stdio.h>

int main() {
    int tamanho = 3;
    int matriz1[tamanho][tamanho];
    int matriz2[tamanho][tamanho];

    puts("Digite um numero de cada vez para formar a primeira matriz: ");
    for(int linha=0;linha<tamanho;linha++){
        for(int coluna=0;coluna<tamanho;coluna++) {
            scanf("%d", &matriz1[linha][coluna]);
            matriz2[linha][coluna] = matriz1[linha][coluna] * 2;
        }
    }
    printf("\nNumeros da segunda matriz:\n");
    for(int linha=0;linha<tamanho;linha++){
        for(int coluna=0;coluna<tamanho;coluna++) {
            printf("%d ", matriz2[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}