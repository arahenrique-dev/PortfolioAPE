/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e
mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
*/
#include <stdio.h>
#include <math.h>
    
int main() {
    float a, b, c;

    printf("A: ");
    scanf("%f", &a);
    fflush(stdin);

    printf("B: ");
    scanf("%f", &b);
    fflush(stdin);

    printf("C: ");
    scanf("%f", &c);
    fflush(stdin);

    float triangulo, circulo, trapezio, quadrado, retangulo;

    triangulo = (a * c) / 2;
    circulo =  3.14159 * pow(c, 2);
    trapezio = ((a + b) * c) / 2;
    quadrado = pow(b, 2);
    retangulo = a * b;

    printf("TRIANGULO: %f\n", triangulo);
    printf("CIRCULO: %f\n", circulo);
    printf("TRAPEZIO: %f\n", trapezio);
    printf("QUADRADO: %f\n", quadrado);
    printf("RETANGULO: %f\n", retangulo);
}