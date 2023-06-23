/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua
esta operação à variável PROD. A seguir mostre a variável PROD com mensagem
correspondente.
*/

#include <stdio.h>
    
int main() {
    int a, b, produto;

    printf("Digite o valor a: ");
    scanf("%d", &a);

    printf("Digite o valor b: ");
    scanf("%d", &b);

    produto = a * b;

    printf("PROD = %d\n", produto);
}