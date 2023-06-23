/* 1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber:
a) média salarial da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.

Henrique Pires Aragão */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float mediaFilhos = 0, maiorSalario = 0, mediaSalarial, percentual100, totalSalarial = 0, totalFilhos = 0, salario = 0;
    int filhos, pessoas100 = 0;
    int i = 0;
    
    while (salario >= 0){
        
        printf("Digite o salario: ");
        scanf("%f", &salario);
            if (salario < 0) break;

        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filhos);
        
        if (salario > maiorSalario)
            maiorSalario = salario;

        if (salario <= 100)
            pessoas100++;
        totalSalarial += salario;
        totalFilhos += filhos;
        i++;
    }
    mediaSalarial = totalSalarial / i;
    mediaFilhos = totalFilhos / i;
    percentual100 = (pessoas100 * 100) / i;

    printf("\nMedia salarial: %.2f\n", mediaSalarial);
    printf("Media de filhos: %.2f\n", mediaFilhos);
    printf("Maior Salario: %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salario ate R$100,00: %.2f", percentual100);

}