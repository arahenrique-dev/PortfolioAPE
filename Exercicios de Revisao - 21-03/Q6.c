/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
de cada peça 2. Após, calcule e mostre o valor a ser pago.*/

#include <stdio.h>
    
int main() {
    int codA, qntA, codB, qntB;
    float valA, valB, total;

    printf("Digite o codigo, quantidade e preco unitario respectivamente da peca A: ");
    scanf("%d %d %f", &codA, &qntA, &valA);

    printf("Digite o codigo, quantidade e preco unitario respectivamente da peca B: ");
    scanf("%d %d %f", &codB, &qntB, &valB);

    total = qntA * valA + qntB * valB;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}