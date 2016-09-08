#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, soma;
    printf("Digite dois numeros reais: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    soma = num1 + num2;

    printf("\nO endereço dos numeros eh: %p, %p, %p", &num1, &num2, &soma);
    printf("\nO valor dos numeros eh: %d, %d, %d", num1, num2, soma);

    return 0;
}

