/*Henrique Pires Aragao
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Matutino
Ciencia da Computacao
Universidade Catolica de Brasilia */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    int escolha;
    char email[50];

    puts("Seja bem vindo! Para comecar a criacao de um email, escolha um numero de 1 a 4 para definir a plataforma desejada:");
    puts("1 - Gmail");
    puts("2 - ICloud");
    puts("3 - OutLook");
    puts("4 - Yahoo");
    scanf("%d", &escolha);
    fflush(stdin);

    puts("Agora defina um apelido para seu email: ");
    gets(email);

    if (escolha == 1) strcat(email, "@gmail.com");
    else if (escolha == 2) strcat(email, "@icloud.com");
    else if (escolha == 3) strcat(email, "@outlook.com");
    else if (escolha == 4) strcat(email, "@yahoo.com");
 
    printf("O seu email sera: %s\n", email);
}