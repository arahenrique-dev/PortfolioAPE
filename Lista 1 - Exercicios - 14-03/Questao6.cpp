#include <stdio.h>
#include <locale.h>

//HENRIQUE PIRES ARAGÃO
/*QUESTAO 6: Faça um algoritmo recebe um valor inteiro 
e se o número for maior que 10, será impressa a frase:
"O número e maior que 10". Se o número for menor que 10, 
será impressa a frase: “O número é menor que 10”. 
Se o número for igual a 10 aparecerá a frase: “Você acertou”. */
//DATA: 14/03/2023

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    int valor;

    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    if (valor > 10)
    {
        printf("O número é maior que 10\n");
    }
    else if (valor < 10)
    {
        printf("O número é menor que 10\n");
    }
    else
    {
        printf("Você acertou\n");
    }
    
}