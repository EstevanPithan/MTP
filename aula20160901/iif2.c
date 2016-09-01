#include <stdio.h>

int main(){

    double numero, fatorial, i;
    printf("Digite um numero para fazer o fatorial: ");
    scanf("%lf", &numero);
    fatorial = 1;
    for(i=2; i<= numero; i++)
        fatorial = fatorial*i;
    printf("\n\nO fatorial de %lf e igual a %lf. \n",numero, fatorial);
    return 0;
}
