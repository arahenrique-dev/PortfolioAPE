/*Henrique Pires Aragao
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Matutino
Ciencia da Computacao
Universidade Catolica de Brasilia */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char senha[50] = "senha";
    char corresponde[50] = "corresponde";

    while (strcmp(senha, corresponde) != 0) {
        while(strlen(senha) < 6) {
            puts("Defina uma senha: ");
            gets(senha);
            if(strlen(senha) < 6)
                puts("A senha deve conter no minimo 6 digitos.");
        }
   
        puts("Confirme sua senha: ");
        gets(corresponde);
        if (strcmp(senha, corresponde))
            puts("As senhas nao coincidem, por favor digite de novo para confirmar");
    }

    puts("Acesso liberado");


    return 0;
}