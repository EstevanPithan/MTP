#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#define N 1000

int main(){
    srand(time(0));
    int vet[N];
    int num1, i;
    int menor = 1 << 31-1, maior = 0;

    printf("Digite um numero de 1 a 1000: ");
    scanf("%d", &num1);

    for(i=0; i != num1; i++){
        vet[i] = (rand()%10 );
        printf("%d ", vet[i]);
    }
    printf("\n");

    for(i=0; i != num1; i++)
    {
        if(vet[i] < menor)
            menor =  vet[i];

        if(vet[i] > maior)
            maior =  vet[i];

    }
    printf("\n%d, %d", menor, maior);

    return 0;
}

