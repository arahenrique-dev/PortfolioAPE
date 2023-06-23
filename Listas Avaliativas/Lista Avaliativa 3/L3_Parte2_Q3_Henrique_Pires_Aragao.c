/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

3) Faça um programa que leia o nome, o time e a quantidade de gols de 3 jogadores de futebol. Após o cadastro informe:
a) A quantidade total de gols marcados;
b) Quantos jogadores jogam no FLAMENGO; c) Todos os dados do artilheiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jogador {
    char nome[50];
    char time[50];
    int qntGols;
};

int main () {
    struct jogador jogadores[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome do %d˚ jogador: ", i + 1);
        gets(jogadores[i].nome);
        printf("Time do %d˚ jogador: ", i + 1);
        gets(jogadores[i].time);
        printf("Quantidade de gols do %d˚ jogador: ", i + 1);
        scanf("%d", &jogadores[i].qntGols);
        fflush(stdin);
    }

    int qntTotalGols = 0;
    int qntFlamengo = 0;
    int artilheiro = jogadores[0].qntGols;
    int indexArtilheiro = 0;
    for (int i = 0; i < 3; i++) {

        qntTotalGols += jogadores[i].qntGols;

        if (strcmp(jogadores[i].time, "FLAMENGO") == 0)
            qntFlamengo += 1;
        if (jogadores[i].qntGols > artilheiro)
            indexArtilheiro = i;
    }

    printf("\nQuantidade total de gols marcados: %d\n", qntTotalGols);
    printf("Quantidade de jogadores do Flamengo: %d\n", qntFlamengo);
    printf("Dados do artilheiro: \n");
    printf("    Nome: %s\n", jogadores[indexArtilheiro].nome);
    printf("    Time: %s\n", jogadores[indexArtilheiro].time);
    printf("    Quantidade de gols: %d\n", jogadores[indexArtilheiro].qntGols);
}
