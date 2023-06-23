/* 5. Desenvolva um programa que calcula a metragem quadrada de um terreno, usando o teste no final para criar a opção de digitar novos valores sem sair do programa.
O programa deverá pedir ao usuário para digitar a metragem1 do terreno, a metragem 2 e em seguida mostrar o tamanho total do terreno em metros quadrados. O programa deverá perguntar ao usuário se ele quer continuar para digitar outras metragens ou encerrar o programa.

Henrique Pires Aragão */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float metragem1, metragem2, metQuadrada;
    char cod = '1';

    while (cod != '0') {
        printf("\nDigite a largura do terreno: ");
        scanf(" %f", &metragem1);
        printf("Digite o comprimento do terreno: ");
        scanf(" %f", &metragem2);

        metQuadrada = metragem1 * metragem2;
        printf("A metragem quadrada do terreno e de %.2f.\n", metQuadrada);

        printf("\nDeseja continuar? Digite 0 para encerrar ou qualquer tecla para continuar\n");
        scanf(" %ch", &cod);
    }
}