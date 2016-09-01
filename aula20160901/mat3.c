#include<stdio.h>
#include<math.h>

int main(){

    double numero, base, resultado;

    printf("Digite o numero e a base para o calculo do log: ");
    scanf("%lf", &numero);
    scanf("%lf", &base);

    resultado = log10(numero)/log10(base);
    printf("\nO logaritmo vale: %lf", resultado);
    return 0;
}


