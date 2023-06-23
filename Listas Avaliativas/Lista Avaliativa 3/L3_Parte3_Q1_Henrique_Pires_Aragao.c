/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

1. Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores utilizando notação de ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite um valor: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++) {
        int *p = &arr[i];
        printf("%d\n", *p);
    }

}