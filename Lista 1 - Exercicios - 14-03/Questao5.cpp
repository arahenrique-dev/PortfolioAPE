#include <stdio.h>
#include <locale.h>

//HENRIQUE PIRES ARAGÃO
/*QUESTAO 5: Faça um programa em C que leia a nota final,
o total de presenças e o número total de aulas ministradas 
e imprima a nota final, o total de presenças e uma mensagem 
dizendo se este aluno foi aprovado ou reprovado. 
Sabe-se que a freqüência necessária é de no mínimo 75% das aulas
ministradas e que a nota mínima deve ser maior ou igual a 6.0. */
//DATA: 14/03/2023

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    float notaFinal, totalPresencas, totalAulas;

    printf("Qual é a nota final do aluno? ");
    scanf("%f", &notaFinal);

    printf("Quantas aulas o aluno esteve presente? ");
    scanf("%f", &totalPresencas);

    printf("Quantas aulas foram ministradas ao total? ");
    scanf("%f", &totalAulas);

    printf("\nNota final: %.2f\nTotal de presenças: %.2f\n", notaFinal, totalPresencas);

    if (totalPresencas > 0.75 * totalAulas && notaFinal > 6.0)
    {
        printf("\nAprovado\n");
    }
    else
    {
        printf("\nReprovado\n");
    }
    
}
