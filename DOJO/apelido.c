// Henrique Pires Aragão

/* SITUACAO-PROBLEMA: Suponha que voce e sua amada querem ter um apelido 
combinando o nome dos dois. Este programa le os dois nomes 
e retorna um apelido a partir das funcoes gets(), puts(), strncpy() e strcat() */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];
    char apelido1[50], apelido2[50];

    printf("Digite um nome: ");
    gets(nome1);

    printf("Digite outro nome: ");
    gets(nome2);

    strncpy(apelido1, nome1, 3);
    strncpy(apelido2, nome2, 3);

    strcat(apelido1, apelido2);
    puts(apelido1);

}