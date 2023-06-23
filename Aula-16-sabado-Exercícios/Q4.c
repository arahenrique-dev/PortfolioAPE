/* Henrique Pires Aragão - UC22101337
ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

Aula-16-sabado-Exercícios
4 - Ler um vetor vet de 10 elementos e obter um vetor
quadrado cujos componentes deste vetor são
o quadrado dos respectivos componentes de vet.*/

#include <stdio.h>

int main() {
    int tamanho = 10;
    int vet[tamanho];
    int quadrado[tamanho];

    puts("Digite um numero de cada vez para formar o vetor: ");
    for(int elemento=0;elemento<tamanho;elemento++){
        scanf("%d", &vet[elemento]);
        quadrado[elemento] = vet[elemento] * vet[elemento];
    }
    printf("\nNumeros quadrados:\n");
    for(int i=0;i<tamanho;i++){
        printf("%d -> %d", vet[i], quadrado[i]);
        printf("\n");
    }
    return 0;
}