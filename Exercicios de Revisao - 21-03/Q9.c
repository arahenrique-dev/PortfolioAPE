/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Faça um algoritmo que leia dois números A e B e imprima o maior deles
*/
#include <stdio.h>
    
int main() {
    float a, b;

    printf("A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

    if (a > b)
        printf("%f", a);
    else
        printf("%.2f", b);
}