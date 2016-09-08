#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont=0;
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};

    unsigned char *p = NULL, *q; //inicializar ponteiros

    p = q = vetor; //vetor já é um endereço de memoria por isso não precisa do &

    for(; p < q + sizeof(vetor); p++){

        if (*p == 0xFF)
            cont++;

        printf("%p : %X\n", p, *p);
    }

    printf("\nBytes com apenas 1's: %d\n", cont);
    return 0;
}
