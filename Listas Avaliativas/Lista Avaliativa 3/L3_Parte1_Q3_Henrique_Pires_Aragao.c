/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

3) Crie um programa em C que cadastre os dados de 5 alunos. Os dados a serem cadastrados são: nome, matrícula, endereço, sexo, os nomes das 3 disciplinas e as 3 notas de cada disciplina que ele está cursando.
Os dados devem ser cadastrados em um vetor e/ou matriz. Após o cadastro informe:
a)Os dados dos alunos cadastrados e a sua situação ("aprovado" ou "reprovado") em cada disciplina.
b)Os dados do aluno com maior média em "LPI".
c)A média geral dos alunos na disciplina "Algoritmo".
d)A quantidade de alunos(as) reprovados em qualquer disciplina.
OBS.:1) Usar uma estrutura switch para mostrar os resultados calculados. 2) Para o aluno ser aprovado a média das notas deve ser >= 6

*/

#include <stdio.h>
#include <stdlib.h>

struct materia {
        char disciplina[50];
        int nota[3];
        int media;
};

struct dados {
    char nome[50];
    int matricula;
    char endereco[100];
    char sexo;
    struct materia materias[3];
    char situacao[50];
};

int main() {
    struct dados alunos[5];
    for (int i = 0; i < 5; i++) {
        printf("%d - Nome: ", i+1);
        scanf("%s", &alunos[i].nome);

        printf("%d - Matricula: ", i+1);
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        printf("%d - Endereco: ", i+1);
        scanf("%s", &alunos[i].endereco);
        fflush(stdin);
        printf("%d - Sexo: ", i+1);
        scanf("%c", &alunos[i].sexo);
        fflush(stdin);
        for (int j = 0; j < 3; j++){
            printf("%d - Nome da disciplina: ", i+1);
            scanf("%s", &alunos[i].materias[j].disciplina);
            fflush(stdin);
            for (int z = 0; z < 3; z++) {
                printf("%d - Nota: ", i+1);
                scanf("%d", &alunos[i].materias[j].nota[z]);
                fflush(stdin);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%s\n", alunos[i].nome);
        printf("%d\n", alunos[i].matricula);
        printf("%s\n", alunos[i].endereco);
        printf("%c\n", alunos[i].sexo);
        for (int j = 0; j < 3; j++){
            printf("Disciplina%s\n", alunos[i].materias[j].disciplina);
            for (int z = 0; z < 3; z++) {
                printf("Nota %d: %d", z + 1, alunos[i].materias[j].nota[z]);
                fflush(stdin);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (alunos[i].materias[j].media >= 6)
                alunos[i].situacao[50] = "Aprovado";
            else 
                alunos[i].situacao[50] = "Reprovado";
        }
    }

    
}