/*Henrique Pires Aragão - UC22101337
Ciencias da Computação
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
PROJETO FINAL
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

//FUNÇÃO PARA CALCULAR O PESO
float calcularPeso () {

    float altura, largura, comprimento;
    float peso, volume, raio;

    printf("Largura: ");
    scanf("%f", &largura);
    fflush(stdin);
    printf("Comprimento: ");
    scanf("%f", &comprimento);
    fflush(stdin);
    printf("Altura: ");
    scanf("%f", &altura);
    fflush(stdin);

    volume = altura * largura * comprimento;
    raio = 25;
    peso = volume * raio;
    return peso;
}

//FUNÇÃO PRINCIPAL
int main () {
    setlocale(LC_ALL, "Portuguese");

    //CHAMADA PARA LER OS ARQUIVOS COM AS IMAGENS ASCII
    FILE* flampada;
    char lampada[800];
    flampada = fopen("lampada.txt", "r");
    FILE* frobo;
    char robo[800];
    frobo = fopen("robo.txt", "r");
    FILE* fcalculadora;
    char calculadora[800];
    fcalculadora = fopen("calculadora.txt", "r");
    FILE* fobrigado;
    char obrigado[800];
    fobrigado = fopen("obrigado.txt", "r");
    

    printf("=====Guindaste Ideal=====\n");
    printf("Para iniciar, insira o valores da coluna (em kg) : \n");
    
    //ARMAZENA O VALOR DA FUNÇÃO DO PESO DENTRO DE UMA VARIAVEL
    float pesoColuna = calcularPeso();
    printf("Peso: %.2fkg/m3\n", pesoColuna);

    //CONDIÇÕES PARA UTILIZAÇÃO DE CADA COLUNA
    if (pesoColuna <= 2500)
        printf("Guindaste: G1\n");
    else {
        if (pesoColuna > 5000)
            printf("Guindaste: G3\n");
        else
            printf("Guindaste: G2\n");
    }

    //MENU QUE FORNECE OPÇÕES AO USUÁRIO
    int escolha = 0;
    while (escolha != 4) {
        system("color 1F");
        printf("\n-----MENU-----\n");
        printf("1 - Ver parâmetros\n");
        printf("2 - Ver fórmula\n");
        printf("3 - Recalcular peso\n");
        printf("4 - Sair\n");
        printf("Digite um numero para escolher: ");
        scanf("%d", &escolha);
        while (escolha > 4 || escolha < 1) {
            printf("Valor inválido. Por favor, digite um número entre 1 e 4.\n");
            printf("Digite um numero para escolher: ");
            scanf("%d", &escolha);
        }
        //CADA CASO FORNECE UMA FUNCIONALIDADE DIFERENTE
        switch (escolha) {
            case 1: {
                //LÊ A IMAGEM DO ARQUIVO
                system("color 0E");
                if (NULL == flampada)
                    printf("arquivo não pode ser aberto\n");
                else {
                    while (fgets(lampada, 800, flampada))
                    printf("%s", lampada);
                }
                printf("\n");
                printf("Parâmetros\n");
                printf("G1: 0 à 2500kg/m3\n");
                printf("G2: 2500 à 5000kg/m3\n");
                printf("G3: Pesos acima de 5000kg/m3\n");
                break;
            }
            case 2: {
                //LÊ A IMAGEM DO ARQUIVO
                system("color 09");
                if (NULL == frobo)
                    printf("arquivo não pode ser aberto\n");
                else {
                    while (fgets(robo, 800, frobo))
                    printf("%s", robo);
                }
                printf("\n");
                printf("Fórmula\n");
                printf("Peso = Volume * Raio\n");
                break;
            }
            case 3: {
                //LÊ A IMAGEM DO ARQUIVO
                system("color 0D");
                if (NULL == fcalculadora)
                    printf("arquivo não pode ser aberto\n");
                else {
                    while (fgets(calculadora, 800, fcalculadora))
                    printf("%s", calculadora);
                }
                printf("\n");
                printf("Recalcular peso\n");
                pesoColuna = calcularPeso();
                printf("Peso: %.2fkg/m3\n", pesoColuna);
                if (pesoColuna <= 2500)
                    printf("Guindaste: G1\n");
                else {
                    if (pesoColuna > 5000)
                        printf("Guindaste: G3\n");
                    else
                        printf("Guindaste: G2\n");
                }
                break;
            }
            case 4: {
                //LÊ A IMAGEM DO ARQUIVO
                system("color 0B");
                if (NULL == fobrigado)
                        printf("arquivo não pode ser aberto\n");
                else {
                    while (fgets(obrigado, 800, fobrigado))
                        printf("%s", obrigado);
                }
                printf("\n");
                //ENCERRA O PROGRAMA
                printf("\nEncerrando...");
                break;
            }
        }
    }
    return 0;
}