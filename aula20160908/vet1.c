#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main(){
    srand(time(0));

    int num1, i, vet[N];
    float soma =0, quo;

    printf("Digite um numero real: ");
    scanf("%d", &num1);

    for(i=0; i != N; i++){
        vet[i] = (rand()%num1 +1 );
        soma = soma + vet[i];
    }

    quo = soma/N;

    printf("\n\nA media e: %lf\n", quo);

    return 0;
}

