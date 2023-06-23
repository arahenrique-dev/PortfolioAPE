/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

ERRO -> Ver com professor

Construa um algoritmo que receba como entrada três valores e os imprima em ordem
crescente. 
*/

#include <stdio.h>
    
int main() {
    int a, b, c;
    int maior, medio, menor;

    printf("A: ");
    scanf("%d", &a);
    fflush(stdin);

    printf("B: ");
    scanf("%d", &b);
    fflush(stdin);

    printf("C: ");
    scanf("%d", &c);
    fflush(stdin);

    if (a > b && a > c)
        maior = a;
    else if ((a > b && a < c )||(a < b && a > c))
        medio = a;
    else if (a < b && a < c)
        menor = a;

    else if (b > a && b > c)
        maior = b;
    else if (b > a && b < c || b < a && b > c)
        medio = b;
    else if (b < a && b < c)
        menor = b;

    else if (c > b && c > a)
        maior = c;
    else if (c > b && c < a || c < b && c > a)
        medio = c;
    else if (c < b && c < a)
        menor = c;

    printf("Maior: %d\n", maior);
    printf("Medio: %d\n", medio);
    printf("Menor: %d \n", menor);
}