#include <stdio.h>
#include <time.h>

int main(){
    srand(time(0));
    int entrada, numero;
    printf("Entre o numero inteiro nao-negativo: ");
    scanf("%d", &entrada);
    numero = entrada + rand()%1;

    if(numero%2 == 0)
        printf("O numero e par");
    else
        printf("O numero e impar.\n");

    return 0;
}
