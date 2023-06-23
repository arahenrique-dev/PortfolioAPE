/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

ESTE DEU PROBLEMA: O RESULTADO ESTA ERRADO -> A VER COM PROFESSOR

Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o
valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3
. Considere
(atribua) para pi o valor 3.14159.
*/
#include <stdio.h>
#include <math.h>
    
int main() {
    float volume, r, pi;
    pi = 3.14159;
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    fflush(stdin);

    volume = (4/3) * pi * pow(r, 3);

    printf("VOLUME = %f\n", volume);
}