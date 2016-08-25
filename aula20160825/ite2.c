#include <stdio.h>

int main(){

    int i, base, potencia, resultado;
    printf("Digite uma base e um expoente: ");
    scanf("%d", &base);
    scanf("%d", &potencia);
    resultado=1;

    for(i=1; i<=potencia; i++)
        resultado= resultado*base;
    printf("\n\nO resultado de %d elevado a %d e igual a %d. \n",base, potencia, resultado);
    return 0;
}

