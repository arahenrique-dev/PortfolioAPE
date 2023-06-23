#include <stdio.h>
#include <locale.h>

//HENRIQUE PIRES ARAGÃO
/*QUESTÃO 3: Faça um programa que recebe a idade de uma pessoa 
e se idade menor que 30 aparece a mensagem Você é muito jovem. 
Caso idade maior que 30 anos, o programa não fará nada. */
//DATA: 14/03/2023

int main () 
{
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (idade < 30) 
    {
        printf("Você  é muito jovem\n");
    }
    
}