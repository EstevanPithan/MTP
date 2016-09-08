#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont=0;
    int vetor[] = {0,1,2,4,8};

    unsigned char *p = NULL, *q; //inicializar ponteiros

    p = q = (unsigned char *) vetor; //vetor já é um endereço de memoria

    for(; p < q + sizeof(vetor);p++){
        if (*p == 0x0)
            cont++;
            printf("%p : %X\n", p, *p);
    }
    printf("\nBytes com apenas 0's: %d\n", cont);
    return 0;
}
