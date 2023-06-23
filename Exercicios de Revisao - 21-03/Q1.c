/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo
apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo
especificado.
*/

#include <stdio.h>
    
int main() {
    int a, b, x;

    printf("Digite o valor a: ");
    scanf("%d", &a);

    printf("Digite o valor b: ");
    scanf("%d", &b);

    x = a + b;

    printf("X = %d\n", x);
}