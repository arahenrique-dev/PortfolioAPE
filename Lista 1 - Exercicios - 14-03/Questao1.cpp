#include <stdio.h>
#include <locale.h>

//HENRIQUE PIRES ARAGÃO
//QUESTÃO 1: Programa que calcule a média de 5 notas de um aluno.
//DATA: 14/03/2023

int main () 
{
    setlocale(LC_ALL, "Portuguese");
    float nota[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite sua nota: ");
        scanf("%f", &nota[i]);
    }
    
    float media = (nota[0] + nota[1] + nota[2] + nota[3] + nota[4]) / 5;
    printf("A média da sua nota é: %.2f\n", media);
}