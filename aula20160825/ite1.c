#include <stdio.h>

int main(){

    int i, numero, fatorial;
    printf("Digite um numero para fazer o fatorial: ");
    scanf("%d", &numero);
    fatorial = 1;
    for(i=2; i<= numero; i++)
        fatorial = fatorial*i;
    printf("\n\nO fatorial de %d e igual a %d. \n",numero, fatorial);
    return 0;
}
