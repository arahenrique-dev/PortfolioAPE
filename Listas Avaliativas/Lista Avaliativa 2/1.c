/*Henrique Pires Aragao
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Matutino
Ciencia da Computacao
Universidade Catolica de Brasilia */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    char frase[100];

    puts("A lingua do P, em que todas as consoantes sao trocadas pela letra p");
    puts("Digite uma frase em minusculo para ser traduzida para a lingua do 'p': ");
    gets(frase);

    char traducao[100];
    strcpy(traducao, frase);

    char vogais[5] = "aeiou";
    int i = 0;
    while (i < strlen(traducao)) {
        if (traducao[i] != 'a' && traducao[i] != 'e' && traducao[i] != 'i' && traducao[i] != 'o' && traducao[i] != 'u' && traducao[i] != ' ') {
                traducao[i] = 'p';
        }
        i++;
    }
    puts("Original: ");
    puts(frase);
    puts("Traducao: ");
    puts(traducao);
}