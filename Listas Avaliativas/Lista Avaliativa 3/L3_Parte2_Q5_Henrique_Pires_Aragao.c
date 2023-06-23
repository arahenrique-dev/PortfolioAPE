/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

5) Qual o valor impresso para a e b ? #include <stdio.h>
int main () {
int a = 5, b = 15; int *pA, *pB;
pA = &a;
pB = &b;
*pA = 10;
*pB = *pA;
pA = pB;
*pA = 20;
printf (“a=%d“, a); printf(“ b=%d“, b); getch();
}
*/

/* Será a = 10 e b = 20 porque primeiramente foi estabelecido
os endereços de a e b para as variáveis pA e pB respectivamente
e então atribuido 10 para 'a' através do ponteiro pA. Depois, 
foi atribuido o endereço de 'b' para pA e então pA recebeu o valor de 20.*/