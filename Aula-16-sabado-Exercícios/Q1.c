/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Aula-16-sabado-Exercícios
1- Criar um algoritmo que leia os elementos de
uma matriz inteira de 4 x 4 e imprimir os
elementos da diagonal principal.*/

#include <stdio.h>

int main() {
    int matriz[4][4];

    puts("Digite um numero de cada vez para formar a matriz: ");
    for(int l=0;l<4;l++){
        for(int c=0;c<4;c++) {
            scanf("%d", &matriz[l][c]);
        }
    }
    printf("\nNumeros na diagonal principal:\n");
    for(int l=0;l<4;l++){
        for(int c=0;c<4;c++) {
            if (l == c)
                printf("%d", matriz[l][c]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}