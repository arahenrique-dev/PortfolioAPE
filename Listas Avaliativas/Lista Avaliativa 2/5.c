/*Henrique Pires Aragao
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Matutino
Ciencia da Computacao
Universidade Catolica de Brasilia */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    char linguagemPreferida[50];
    int escolha;
    char python[10] = "Python";
    char javascript[10] = "Javascript";
    char C[10] = "C";
    char Chash[10] = "C#";
    char Ruby[10] = "Ruby";

    puts("Qual e a sua linguagem preferida (digite um numero");
    printf("1 - %s\n", python);
    printf("2 - %s\n", javascript);
    printf("3 - %s\n", C);
    printf("4 - %s\n", Chash);
    printf("5 - %s\n", Ruby);

    scanf("%d", &escolha);
    
    
    if (escolha > 5 || escolha < 1) {
        while (escolha > 5 || escolha < 1) {
            puts("Numero nao reconhecido. Digite novamente um numero entre 1 e 5.");
            scanf("%d", &escolha);
        }
    }
    else if (escolha == 1) strcpy(linguagemPreferida, python);
    else if (escolha == 2) strcpy(linguagemPreferida, javascript);
    else if (escolha == 3) strcpy(linguagemPreferida, C);
    else if (escolha == 4) strcpy(linguagemPreferida, Chash);
    else if (escolha == 5) strcpy(linguagemPreferida, Ruby);
  
    printf("A sua linguagem de programacao preferida e %s\n", linguagemPreferida);
}