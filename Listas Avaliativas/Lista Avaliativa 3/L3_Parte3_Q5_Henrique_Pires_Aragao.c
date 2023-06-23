/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

5. Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. Associe o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o ponteiro (use *).
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &n);

    int vetorInteiros[n];
    printf("Insira os valores para compor o vetor: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorInteiros[i]);
        fflush(stdin);  
    }

    printf("Novos valores: \n");
    for (int i = 0; i < n; i++) {
        int *p = &vetorInteiros[i];
        *p = *p + 1; 
        printf("%d\n", *p);
    }



}