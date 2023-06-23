/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Atividade Prática – Aula 18 - SÁBADO
1. Desenvolva um programa em C utilizando registro que permita a entrada de nome,
endereço e telefone de 3 pessoas e os imprima ao final.*/

#include <stdio.h>

struct pessoa {
    char nome[50];
    char endereco[50];
    int telefone;
};

int main() {
    struct pessoa pessoa[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome da %d˚ pessoa: ", i + 1);
        gets(pessoa[i].nome);
        fflush(stdin);
        printf("Endereco da %d˚ pessoa: ", i + 1);
        gets(pessoa[i].endereco);
        fflush(stdin);
        printf("Telefone da %d˚ pessoa: ", i + 1);
        scanf("%d", &pessoa[i].telefone);
        fflush(stdin);
    }
    for (int i = 0; i < 3; i++) {
        printf("%d˚ pessoa: \n", i + 1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Endereco: %s\n", pessoa[i].endereco);
        printf("Telefone: %d\n",pessoa[i].telefone);
    }


    
    return 0;
}