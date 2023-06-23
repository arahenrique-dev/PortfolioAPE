/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

3. Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. Utilizando apenas notação de ponteiros, leia esse vetor do teclado e imprima o endereço das posições contendo valores pares.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int elementos[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &elementos[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (elementos[i] % 2 == 0)
            printf("%d: %d\n", elementos[i], &elementos[i]);
    }

}