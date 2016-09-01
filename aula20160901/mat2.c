#include<stdio.h>
#include<math.h>

int main(){

    double lado1, lado2, angulo, lado3;

    printf("Digite os dois lados do triangulo: ");
    scanf("%lf", &lado1);
    scanf("%lf", &lado2);
    printf("\nDigite o angulo(em radianos) formado por esses dois lados: ");
    scanf("%lf", &angulo);

    lado3 = sqrt(pow(lado1, 2)+ pow(lado2, 2)-2*lado1*lado2*cos(angulo));
    printf("\nO terceiro lado vale: %lf", lado3);
    return 0;
}

