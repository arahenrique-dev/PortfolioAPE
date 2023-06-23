/*Henrique Pires Aragâo
UC22101337
CPE02M0392
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int array[10] = {3,5,7,2,9,10,4,6,1,8};

    for (int i = 0; i < 9; i++){
        int indexMenor = i;
        for (int j = (i +1); j < 10; j++) {
            if (array[j] < array[indexMenor])
                indexMenor = j;
        }
        int a = array[i];
        array[i] = array[indexMenor];
        array[indexMenor] = a;
    }

    for (int z = 0; z < 10; z++)
        printf("%d\n", array[z]);
}