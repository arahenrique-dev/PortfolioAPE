#include <stdio.h>
#include <locale.h>

//HENRIQUE PIRES ARAGÃO
//QUESTAO 2: Um programa que calcule a área do triângulo.
//DATA: 14/03/2023

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    float area, base, altura;
    
    printf("Qual o tamanho da base do triângulo? ");
    scanf("%f", &base);

    printf("Qual o tamanho da altura do triângulo? ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nA área do triângulo será: %.2f\n", area);
}