#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));

    int sorteado, numero;
    sorteado = rand()%100;

    printf("Digete um numero para comparação(0 a 99): ");
    scanf("%d", &numero);
    printf("\n%d", sorteado);

    while (numero != sorteado){

        if(numero > sorteado){
            printf("\nAlto");}

        if(numero < sorteado){
            printf("\nBaixo");}

        if(numero == sorteado){
            printf("\nAcertou");}

        printf("\n\nDigite um numero para comparação(0 a 99): ");
        scanf("%d", &numero);

    }
    if(numero == sorteado)
        printf("\nAcertou");

    return 0;
}

