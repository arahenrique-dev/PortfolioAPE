#include <stdio.h>
#include <locale.h>

//HENRIQUE PIRES ARAGÃO
/*QUESTAO 4: Faça um programa que entra com a idade de uma pessoa 
e se idade maior que 70 anos, aparece a mensagem Velho. 
Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem. */
//DATA: 14/03/2023

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    if (idade >= 70)
    {
        printf("Velho\n");
    }
    else if (idade >= 21)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Jovem\n");
    }
}