/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

4. Crie uma função que aceite como parâmetro um vetor de inteiros com N valores, e determina o maior elemento do vetor e o número de vezes que este elemento ocorreu no vetor. Por exemplo, para um vetor com os seguintes elementos: 3, 5, 12, 6, 7, 27, 9, 16, 27, a função deve retorna para o programa que a chamou o valor 27 e o número 2 (indicando que o número 27 ocorreu 2 vezes). A função deve ser do tipo void.
*/

#include <stdio.h>
#include <stdlib.h>

int elementoVetor();

int main() {
    elementoVetor();
}

int elementoVetor() {
    int n;
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &n);

    int vetor[n];
    int maior = 0;
    int qntMaior = 0;
    printf("Insira os valores: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        fflush(stdin);
        if (vetor[i] > maior)
            maior = vetor[i];   
    }
    for (int i = 0; i < n; i++) {
        if (vetor[i] == maior)
            qntMaior++;
    }
    printf("Maior elemento: %d\n", maior);
    printf("Numero de ocorrencias do maior elemento: %d\n", qntMaior);
}