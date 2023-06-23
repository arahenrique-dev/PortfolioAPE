/* Henrique Pires Aragão
Turma: GPE02M0392
Data: 03/06
Tema: Lista Avaliativa 3

2) Quais os valores impressos ?
main( ) {
int *pontA, *pontB, v1, v2;
v1 = 3;
v2 = 12;
pontA = &v1;
pontB = pontA;
*pontB = 44;
printf("Valores das variáveis");
printf("v1 (conteudo) = %d",v1);
printf("v1 (endereco) = %d",&v1);
printf("v2 (conteudo) = %d",v2);
printf("v2 (endereco) = %d",&v2);
printf("Valores dos ponteiros");
printf("pontA (conteudo) = %d",pontA); printf("pontA (endereco) = %d",&pontA); printf("pontA (valor do ponteiro) = %d",*pontA); printf("pontB (conteudo) = %d",pontB); printf("pontB (endereco) = %d",&pontB); printf("pontB (valor do ponteiro) = %d",*pontB); getch(); }
*/

/* O conteudo de v1 será 44 porquê foi atribuído 44 para o *pontB, que foi apontado para o endereço de v1 através de 'pontB = pontA'.
O conteudo de v2 continua sendo 12 porquê nenhum ponteiro aponta para v2.
O endereco de v1, do pontA e o conteudo de pontB é 1801417340.
*/