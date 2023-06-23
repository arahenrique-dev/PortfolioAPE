/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre
elas e atribua à variável SOMA. A seguir escrever o valor desta variável.
*/

#include <stdio.h>
    
int main() {
    int a, b, soma;

    printf("Digite o valor a: ");
    scanf("%d", &a);

    printf("Digite o valor b: ");
    scanf("%d", &b);

    soma = a + b;

    printf("SOMA = %d\n", soma);
}