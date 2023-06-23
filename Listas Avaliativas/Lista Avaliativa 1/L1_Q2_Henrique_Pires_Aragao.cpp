/* 2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que recebendo a altura e o crescimento anual de duas pessoas calcule e imprima quantos anos serão necessários para que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos informar mensagem de impossibilidade.
Encerre a entrada de dados quando for digitada uma idade negativa. (Não use vetores ou matrizes).

Henrique Pires Aragão */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float pessoa1, pessoa2;
    float cm1, cm2;
    int anos = 0;

    printf("Qual a altura em metros da primeira pessoa? ");
    scanf("%f", &pessoa1);
    printf("Quantos cm a primeira pessoa cresce por ano? ");
    scanf("%f", &cm1);
    cm1 /= 100;

    printf("Qual a altura em metros da segunda pessoa? ");
    scanf("%f", &pessoa2);
    printf("Quantos cm a segunda pessoa cresce por ano? ");
    scanf("%f", &cm2);
    cm2 /= 100;
    int primeiraSegunda = 0;

    if (pessoa1 < pessoa2) {
        primeiraSegunda = 1;

        while (pessoa1 < pessoa2) {
            pessoa1 += cm1;
            pessoa2 += cm2;
            anos++;
        }
        
    }
    else if (pessoa2 < pessoa1) {
        primeiraSegunda = 2;

        while (pessoa2 < pessoa1) {
            pessoa1 += cm1;
            pessoa2 += cm2;
            anos++;
        }
    }

    if (anos >= 100)
        printf("Impossivel\n");
    else {
        if (primeiraSegunda == 1) 
            printf("A primeira pessoa sera mais alta que a segunda em %d anos\n", anos);
        else if (primeiraSegunda == 2) 
            printf("A segunda pessoa sera mais alta que a primeira em %d anos\n", anos);
    }
        

    
}