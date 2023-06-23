/* 4. Elabore um programa que receba como dados de entrada duas notas de vários alunos
e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou;
Observação: O programa deve finalizar quando for digitado o valor 0 (zero) e utilizar no
máximo 6 variáveis não utilizar vetores ou matrizes.

Henrique Pires Aragão */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    char cod = '1';

    float nota1, nota2, media, menorMedia = 100, mediaGeral = 0;
    int vezes = 0, alunosMaior7 = 0;

    while (cod != '0') {
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        if(media >= 7) alunosMaior7++;
        if(media < menorMedia) menorMedia = media;
        mediaGeral += media;
        vezes++;

        printf("Digite '0' para encerrar e qualquer tecla para continuar: \n");
        scanf(" %c", &cod);
    }
        mediaGeral /= vezes;

        printf("\nAlunos com media maior ou igual a 7: %d\n", alunosMaior7);
        printf("Menor media da turma: %.2f\n", menorMedia);
        printf("Media geral da turma: %.2f\n", mediaGeral);
        printf("Vezes que o programa rodou: %d\n", vezes);
}