#include <stdio.h>
#include <stdlib.h>


int main(){

    int i, vet[10];


    printf("Digite 10 numeros reais:\n");

    for(i=0; i != 10; i++)
      scanf("%d", &vet[i]);

    for(i=9; i > -1; i--)
        printf("%d ", vet[i]);

return 0;
}


