/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Aula-15
Você foi designado para implementar um programa
para o setor de produção de uma empresa. O setor
precisa de um programa em linguagem C que
armazene a temperatura de 3 máquinas. O
operador das máquinas fará a leitura da
temperatura, duas vezes ao dia e digitará no
programa o código da máquina e as temperaturas.
Como você implementará a solução?
*/
#include <stdio.h>

int main() {
    int temperatura[3][3];

    for (int l=0; l<3; l++){
        int c = 0;
        printf("Codigo da maquina %d: ", l + 1);
        scanf("%d", &temperatura[l][c]);
        c++;
        printf("Temperatura 1: ");
        scanf("%d", &temperatura[l][c]);
        c++;
        printf("Temperatura 2: ");
        scanf("%d", &temperatura[l][c]);
        c++;
    }
    for (int l=0; l<3; l++){
        int c = 0;
        printf("\nCodigo da maquina %d: ", l + 1);
        printf("%d\n", temperatura[l][c]);
        c++;
        printf("Temperatura 1: ");
        printf("%d\n", temperatura[l][c]);
        c++;
        printf("Temperatura 2: ");
        printf("%d\n", temperatura[l][c]);
        c++;
    }
}
