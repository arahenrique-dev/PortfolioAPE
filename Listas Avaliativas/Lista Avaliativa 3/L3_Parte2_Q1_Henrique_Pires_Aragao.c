/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

1) Faça um programa que leia o nome, sexo e o valor da mensalidade de 3 alunos. Após a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M'); c) A média das mensalidades;
d) O nome e a idade do aluno mais velho.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[50];
    int idade;
    char sexo;
    int valorMensalidade;

};

int main () {
    struct aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome do %d˚ aluno: ", i + 1);
        gets(alunos[i].nome);
        printf("Idade do %d˚ aluno: ", i + 1);
        scanf("%d", &alunos[i].idade);
        fflush(stdin);
        printf("Sexo do %d˚ aluno (M ou F): ", i + 1);
        scanf("%c", &alunos[i].sexo);
        fflush(stdin);
        printf("Valor da mensalidade do %d˚ aluno: ", i + 1);
        scanf("%d", &alunos[i].valorMensalidade);
        fflush(stdin);
    }

    int menorMensalidade, qntM, idadeMaisVelho;
    char nomeMaisVelho[50];
    float mediaMensalidade;
    menorMensalidade = alunos[0].valorMensalidade;
    qntM = 0;
    mediaMensalidade = 0;
    idadeMaisVelho = alunos[0].idade;
    for (int i = 0; i < 3; i++) {
        if (menorMensalidade > alunos[i].valorMensalidade)
            menorMensalidade = alunos[i].valorMensalidade;
        if (alunos[i].sexo == 'M')
            qntM++;
        mediaMensalidade += alunos[i].valorMensalidade;
        if (idadeMaisVelho < alunos[i].idade) {
            idadeMaisVelho = alunos[i].idade;
            strcpy(nomeMaisVelho, alunos[i].nome);
        }
            
    }
    mediaMensalidade = mediaMensalidade / 3;

    printf("Menor mensalidade: %d\n", menorMensalidade);
    printf("Quantidade de alunos do sexo masculino: %d\n", qntM);
    printf("Media das mensalidades: %.2f\n", mediaMensalidade);
    printf("Nome e idade do aluno mais velho: %s - %d\n", nomeMaisVelho, idadeMaisVelho);

}