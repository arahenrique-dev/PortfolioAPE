/*
Henrique Pires Aragão
UC22101337

ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
Exercícios de Revisão - 21.03.23

ERRO -> Ver com professor

Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda de
um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se
o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo
extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%.
Escreva um algoritmo que gere um relatório contendo nome, valor da venda e
comissão de cada um dos corretores. O relatório deve mostrar também o total de
vendas da empresa. 
*/

#include <stdio.h>
    
int main() {
    char nomeA[30], nomeB[30], nomeC[30];
    float vendaA, vendaB, vendaC;
    float comissaoA, comissaoB, comissaoC;
    
    printf("Digite o nome e valor das vendas do primeiro corretor respectivamente: ");
    scanf("%c %f", &nomeA, &vendaA);
    
    printf("Digite o nome e valor das vendas do segundo corretor respectivamente: ");
    scanf("%c %f", &nomeB, &vendaB);

    printf("Digite o nome e valor das vendas do terceiro corretor respectivamente: ");
    scanf("%c %f", &nomeC, &vendaC);

    

    printf("Vendedor A\n");
    printf("Nome: %s\n", nomeA);
    printf("Valor da Venda: %f\n", vendaA);
    printf("Comissao: %f", comissaoA);
}