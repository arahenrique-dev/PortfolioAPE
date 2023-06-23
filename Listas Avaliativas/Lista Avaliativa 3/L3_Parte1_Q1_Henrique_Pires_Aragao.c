/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3


1) Crie um programa que carregue (armazene) números numa matriz 3 x 3. Após a leitura dos números, você deverá criar um MENU que ofereça as seguintes opções:
1 – Mostra a quantidade de números pares armazenados; 
2 – Mostra a soma dos números ímpares armazenados;
3 – Mostra o maior e o menor número armazenado;
4 – Mostra a média dos números armazenados;
5 – Mostra a quantidade de números armazenados que são iguais a 10;
6 – Mostra a multiplicação dos números armazenados na diagonal principal (índice da linha igual ao índice da coluna);
7 – Mostra a soma dos números armazenados que são divisíveis por 5.
8 – Armazena num vetor todos os números menores que 8. Mostrar o vetor
resultante.
9 – Consulta um número na matriz. O usuário deverá informar qual o número deseja procurar na matriz, caso encontre, informar o número e qual a posição(índices) na matriz.
10 – SAIR
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
    int matriz[3][3];

    puts("Digite 9 numeros de 0 a 100 para formar uma matriz:");
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    int escolha;
    do {
        printf("\n");
        puts("Escolha uma opcao:");
        puts("1 – Mostra a quantidade de números pares armazenados");
        puts("2 – Mostra a soma dos números ímpares armazenados");
        puts("3 – Mostra o maior e o menor número armazenado");
        puts("4 – Mostra a média dos números armazenados");
        puts("5 – Mostra a quantidade de números armazenados que são iguais a 10");
        puts("6 – Mostra a multiplicação dos números armazenados na diagonal principal (índice da linha igual ao índice da coluna)");
        puts("7 – Mostra a soma dos números armazenados que são divisíveis por 5");
        puts("8 – Armazena num vetor todos os números menores que 8. Mostrar o vetor resultante");
        puts("9 – Consulta um número na matriz. O usuário deverá informar qual o número deseja procurar na matriz, caso encontre, informar o número e qual a posição(índices) na matriz");
        puts("10 – SAIR");


        printf("Digite o numero para escolher: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: {
                int par = 0;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        if ((matriz[i][j] % 2) == 0)
                            par++;
                    }
                }
                printf("Quantidade de numeros pares: %d\n", par);
                break;
            }
            case 2: {
                int somaImpar = 0;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        if ((matriz[i][j] % 2) != 0)
                            somaImpar += matriz[i][j];
                    }
                }
                printf("Soma dos numeros impares armazenados: %d\n", somaImpar);
                break;
            }
            case 3: {
                int maior = 0;
                int menor = 1000;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        if (matriz[i][j] > maior)
                            maior = matriz[i][j];
                        if (matriz[i][j] < menor)
                            menor = matriz[i][j];
                    }
                }
                printf("Maior numero armazenado: %d\n", maior);
                printf("Menor numero armazenado: %d\n", menor);
                break;
            }
            case 4: {
                float media = 0;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        media += matriz[i][j];
                    }
                }
                media = media / 9;
                printf("Media dos numeros armazenados: %.2f\n", media);
                break;
            }
            case 5: {
                int quantidade10 = 0;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        if (matriz[i][j] == 10)
                            quantidade10++;
                    }
                }
                printf("Quantidade de numeros armazenados iguais a 10: %d\n", quantidade10);
                break;
            }
            case 6: {
                int multiplicacao = matriz[0][0] * matriz[1][1] * matriz[2][2];
                printf("Multiplicacao dos numeros na diagonal principal: %d", multiplicacao);
                break;
            }
            case 7: {
                int numDivisi5 = 0;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        if ((matriz[i][j] % 5) == 0)
                            numDivisi5 += matriz[i][j];
                    }
                }
                printf("Soma dos numeros divisiveis por 5: %d\n", numDivisi5);
                break;
            }
            case 8: {
                int menorQue8[9];
                int z = 0;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        if (matriz[i][j] < 8) {
                            menorQue8[z] = matriz[i][j];
                            z++;
                        }
                    }
                }
                printf("Vetor dos umeros menores que 8: ");
                for (int i = 0; i < 9; i++)
                    printf("%d,", menorQue8[i]);
                break;
            }
            case 9: {
                int consulta;
                printf("Consulte um numero na matriz: ");
                scanf("%d", &consulta);
                bool existe = false;
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j) {
                        if (matriz[i][j] == consulta) {
                            printf("O numero %d esta na linha %d e na coluna %d\n", consulta, i + 1, j + 1);
                            existe = true;
                        }
                    }
                }
                if (existe == false)
                    printf("O numero nao esta na matriz\n");
                break;
            }
        }
    } while (escolha != 10);

    return 0;
}