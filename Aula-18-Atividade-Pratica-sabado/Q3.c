/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Atividade Prática – Aula 18 - SÁBADO
3. Considerando a estrutura abaixo para representar um vetor, implemente um programa
que calcule a soma de dois vetores, sabendo que:
A + B = < (a1 + a2), (b1 + b2), (c1 + c2) >

struct vetor{
    int a;
    int b;
    int c;
};
*/

#include <stdio.h>

struct vetor{
    int a;
    int b;
    int c;
};

int main () {
    struct vetor vetorA, vetorB, vetorSoma;

    printf("Digite os valores do vetor A\n");
    printf("a: ");
    scanf("%d", &vetorA.a);
    printf("b: ");
    scanf("%d", &vetorA.b);
    printf("c: ");
    scanf("%d", &vetorA.c);
    printf("Digite os valores do vetor B\n");
    printf("a: ");
    scanf("%d", &vetorB.a);
    printf("b: ");
    scanf("%d", &vetorB.b);
    printf("c: ");
    scanf("%d", &vetorB.c);

    vetorSoma.a = vetorA.a + vetorB.a;
    vetorSoma.b = vetorA.b + vetorB.b;
    vetorSoma.c = vetorA.c + vetorB.c;

    printf("A Soma dos vetores e: \n");
    printf("a: %d\n", vetorSoma.a);
    printf("b: %d\n", vetorSoma.b);
    printf("c: %d\n", vetorSoma.c);
}