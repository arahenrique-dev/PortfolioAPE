/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a
condição:
 “F1”, se N <= 10
 “F2”, se N > 10 e N <= 100
 “F3”se n > 100
*/

#include <stdio.h>
    
int main() {
    int n;

    printf("Digite o valor do numero: ");
    scanf("%d", &n);

    if (n <= 10)
        printf("F1\n");
    else if (n > 10 && n <= 100)
        printf("F2\n");
    else
        printf("F3\n");
}