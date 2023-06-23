/* 3. Elabore um programa que faça o sorteio de vários números e ao final mostra:
a) A quantidade de números sorteados;
b) O Maior numero sorteado;
c) Quantos números pares foram sorteados;
Observação: O programa deve finalizar quando for sorteado o valor 0 (zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.

Henrique Pires Aragão */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int qntdNumeros = 0;
    int maior = 0;
    int sorteado = 1;
    int pares = 0;
    srand(time(NULL));

    printf("Serao sorteados diversos numeros entre 0 e 100, se encerrando quando ser sorteado o numero 0\n");
    while (sorteado != 0) {
        sorteado = rand() % 101;
        printf("%d\n", sorteado);
        qntdNumeros++;
        if (sorteado > maior)
            maior = sorteado;
        if (sorteado % 2 == 0)
            pares++;
    }
    printf("Foram sorteados %d numeros para chegar no 0\n", qntdNumeros);
    printf("Maior numero sorteado: %d\n", maior);
    printf("Quantidade de numeros pares: %d\n", pares);
}