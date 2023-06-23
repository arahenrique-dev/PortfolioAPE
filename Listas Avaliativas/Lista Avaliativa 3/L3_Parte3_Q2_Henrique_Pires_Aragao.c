/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

2. Crie um programa em C que receba três números do usuário depois crie uma função que receba os 3 números como parâmetros: A, B e C. Ordene de tal forma que, ao final da função, A contenha o menor número e C o maior. Imprima os três números. Obs: Utilize ponteiro para solucionar o problema.
*/

#include <stdio.h>
#include <stdlib.h>

int ordenar(int a, int b, int c);

int main () {
    int numeros[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite um valor: ");
        scanf("%d", &numeros[i]);
    }

    ordenar(numeros[0], numeros[1], numeros[2]);
}

int ordenar(int a, int b, int c) {

   int *pA = &a;
   int *pB = &b;
   int *pC = &c;

   int maior, medio, menor;

    //A Menor
    if (a < b && a < c)
        menor = *pA;
    if (b < a && b < c)
        menor = *pB;
    if (c < a && c < b)
        menor = *pC;

    //B Medio
    if ((a > b && a < c) || (a < b && a > c))
        medio = *pA;
    if ((b > a && b < c) || (b < a && b > c))
        medio = *pB;
    if ((c < a && c > b) || (c > a && c < b))
        medio = *pC;

    //Maior
    if (a > b && a > c)
        maior = *pA;
    if (b > a && b > c)
        maior = *pB;
    if (c > a && c > b)
        maior = *pC;

    *pA = menor;
    *pB = medio;
    *pC = maior;

    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
}