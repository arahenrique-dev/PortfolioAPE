/*Henrique Pires Aragao
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Matutino
Ciencia da Computacao
Universidade Catolica de Brasilia */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {

    char sobrenome[50];
    char primeiroNome1[50];
    char primeiroNome2[50];
    char primeiroNome3[50];
    char primeiroNome4[50];
    char primeiroNome5[50];

    puts("Suponha que todas as pessoas de uma mesma familia de 5 pessoas tenham o mesmo sobrenome");
    puts("Este programa le o nome dos membros da familia e adiciona automaticamente o sobrenome.");
    
    puts("Primeiramente, digite o sobrenome da familia:");
    gets(sobrenome);

        puts("Digite o seu primeiro nome de uma pessoa: ");
        gets(primeiroNome1);
        puts("Digite o seu primeiro nome de outra pessoa: ");
        gets(primeiroNome2);
        puts("Digite o seu primeiro nome de outra pessoa: ");
        gets(primeiroNome3);
        puts("Digite o seu primeiro nome de outra pessoa: ");
        gets(primeiroNome4);
        puts("Digite o seu primeiro nome de outra pessoa: ");
        gets(primeiroNome5);

        strcat(primeiroNome1, " ");
        strcat(primeiroNome2, " ");
        strcat(primeiroNome3, " ");
        strcat(primeiroNome4, " ");
        strcat(primeiroNome5, " ");
        
        puts(strcat(primeiroNome1, sobrenome));
        puts(strcat(primeiroNome2, sobrenome));
        puts(strcat(primeiroNome3, sobrenome));
        puts(strcat(primeiroNome4, sobrenome));
        puts(strcat(primeiroNome5, sobrenome));
        
}