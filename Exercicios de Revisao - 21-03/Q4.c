/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
*/

#include <stdio.h>
    
int main() {
    int a, b, c, d, diferenca;

    printf("Digite o valor a: ");
    scanf("%d", &a);

    printf("Digite o valor b: ");
    scanf("%d", &b);

    printf("Digite o valor c: ");
    scanf("%d", &c);

    printf("Digite o valor d: ");
    scanf("%d", &d);

    diferenca = (a * b - c * d);

    printf("DIFERENCA = %d\n", diferenca);
}