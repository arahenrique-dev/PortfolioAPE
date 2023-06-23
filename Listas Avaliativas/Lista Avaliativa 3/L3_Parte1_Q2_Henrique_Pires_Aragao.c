/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

2) Crie um programa que armazene 3 nomes numa matriz de strings. Após o
cadastro, você deverá criar um MENU que informe:
1  Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja,
mostra do último ao primeiro nome cadastrado;
2  Mostra quantas pessoas com o nome “PAULO” foram cadastradas; 
3  Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
4  Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
5  SAIR
Obs.:
(1) O programa só poderá ser finalizado quando a opção SAIR for escolhida pelo usuário!
(2) Aproveite a estrutura de repetição da leitura dos dados, para calcular as informações a serem apresentadas na estrutura switch (Menu).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct pessoa {
    char nomes[50];
};

int main () {
    struct pessoa nome[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite um nome: ");
        scanf("%s", &nome[i].nomes);
    }

    
    int escolha;
    do {
        puts("Escolha uma opcao: ");
        puts("1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja, mostra do último ao primeiro nome cadastrado");
        puts("2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas");
        puts("3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings");
        puts("4 – Mostra quantas letras ‘C’ o segundo nome cadastrado possui");
        puts("5 – SAIR");

        printf("Digite o numero para escolher: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: {
                for (int i =2; i >= 0; i--) {
                    int j = 0;
                    while (j < strlen(nome[i].nomes)) {
                        printf("%c", toupper(nome[i].nomes[j]));
                        j++;
                    }
                    printf("\n");
                }
                break;
            }
            case 2: {
                int qntPaulo = 0;
                for (int i = 0; i < 3; i++) {
                    if (strcmp(nome[i].nomes, "PAULO") == 0)
                        qntPaulo += 1;
                }
                printf("Quantidade de Paulos: %d\n", qntPaulo);
                break;
            }
            case 3: {
                int qntA = 0;
                for (int i = 0; i < 3; i++) {
                    int j = 0;
                    while (j < strlen(nome[i].nomes)) {
                        if (nome[i].nomes[j] == "A") 
                            qntA += 1;
                        j++;
                    }
                }
                printf("Quantidade de As: %d\n", qntA);
                break;
            }
            case 4: {
                int i = 0;
                int qntC = 0;
                while (i < strlen(nome[2].nomes[i])) {
                    if (strcmp(nome[2].nomes[i], "C"))
                        qntC++;
                }
                break;
            }
        }

    } while (escolha != 5);
}