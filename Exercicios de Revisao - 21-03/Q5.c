/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15%
de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.
*/

#include <stdio.h>
    
int main() {
    char nome[30];
    float salarioFixo, totalVendas, total;

    printf("Digite seu nome: ");
    scanf("%c", nome);
    fflush(stdin);

    printf("Digite seu salario fixo: ");
    scanf("%f", &salarioFixo);
    fflush(stdin);
    
    printf("Digite o total de vendas efetuadas: ");
    scanf("%f", &totalVendas);
    fflush(stdin);

    total = 0.15 * totalVendas + salarioFixo;
    printf("Total = %.2f\n", total);
}