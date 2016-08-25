#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);

    for(i= 2; i<numero; i++){
        if (numero%i == 0){
            printf("Nao primo!\n");
            break;
        }
    }
    if(i ==  numero)
        printf("Primo!!!!\n");
    return 0;
}

