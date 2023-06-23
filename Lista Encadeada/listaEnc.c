//Henrique Pires Aragão
//Lista Encadeada
//Ciencia da Computacao
//Algoritimo e Programacao Estruturada

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numElemento;

    printf("Digite quantos elementos: ");
    scanf("%d", &numElemento); 


    int *p;
    p = (int *)malloc(numElemento * sizeof(int));
    printf("Endereco de memoria: %d\n", p);

    if (p == NULL) 
        printf("Falha na alocacao\n");
    else {
        for (int i = 0; i < numElemento; i++){
            p[i] = i + 1;
            printf("%d", p[i]);
        }
        printf("\nDeseja alocar mais memoria? \n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        int escolha;
            scanf("%d", &escolha);
        
        if (escolha == 1) {
            printf("Digite quantos elementos: ");
            scanf("%d", &numElemento);
                
            p = (int *)calloc(numElemento, sizeof(int));

            for (int i = 0; i < numElemento; i++){
                p[i] = i + 1;
                printf("%d", p[i]);
            }
        }
        else {
            return 1;
        }
        printf("\nDeseja alterar o numero de memoria? \n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
            scanf("%d", &escolha);
        if (escolha == 1) {
            printf("Digite quantos elementos: ");
            scanf("%d", &numElemento);
            
            p = (int *)realloc(p, 15);

            for (int i = 0; i < numElemento; i++){
                p[i] = i + 1;
                printf("%d", p[i]);

            }
        }
        else {
            return 1;
        }
        printf("\n");
        free(p);
        for (int i = 0; i < numElemento; i++){

            p[i] = i + 1;
            printf("%d", p[i]);
        }
    }
}