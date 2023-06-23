/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Atividade Prática – Aula 18 - SÁBADO
2. Defina uma estrutura em C para armazenar dados de um veículo (Marca, modelo, cor,
quantidade de portas, motorização), crie uma função para armazenar os dados de 10
veículos, outra para mostrar os dados armazenados, a função main() deve conter um
pequeno menu para chamar as funções criadas.*/

#include <stdio.h>

struct veiculo {
    char marca[50];
    char modelo[50];
    char cor[50];
    char qntPortas[10];
    char motor[50];
};
int leituraDados();

int main() {
    leituraDados();
    for (int i = 0; i < 3; i++) {
        printf("Nome da %d˚ pessoa: ", i + 1);
        gets(pessoa[i].nome);
        fflush(stdin);
        printf("Endereco da %d˚ pessoa: ", i + 1);
        gets(pessoa[i].endereco);
        fflush(stdin);
        printf("Telefone da %d˚ pessoa: ", i + 1);
        scanf("%d", &pessoa[i].telefone);
        fflush(stdin);
    }
    
    return 0;
}

int leituraDados () {
    struct veiculo veiculos[10];

    for (int i = 0; i < 10; i++){
        printf("%d˚ veiculo: \n", i + 1);
        printf("Marca: ");
        gets(veiculos[i].marca);
        fflush(stdin);
        printf("Modelo: ");
        gets(veiculos[i].modelo);
        fflush(stdin);
        printf("Cor: ");
        gets(veiculos[i].cor);
        fflush(stdin);
        printf("Quantidade de portas: ");
        gets(veiculos[i].qntPortas);
        fflush(stdin);
        printf("Motorizacao: ");
        gets(veiculos[i].motor);
        fflush(stdin);
    }
    
}

struct imprimirDados () {
    struct veiculo veiculos = x;
    for (int i = 0; i < 10; i++) {
        printf("%d˚ veiculo: \n", i + 1);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Cor: %s\n",pessoa[i].telefone);
        printf("Quantidade de portas: %d\n",pessoa[i].telefone);
        printf("Motorizacao: %s\n",pessoa[i].telefone);
    }
}