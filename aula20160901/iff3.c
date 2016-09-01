#include<stdio.h>
#include<math.h>

int main(){

    int i, num;
    double invertido1, resultado1=0;
    float invertido2, resultado2=0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    invertido1 = 1.0/num;
    for (i=0; i <729; i++){
        resultado1= resultado1+invertido1;
    }
    printf("\nresultado double e: %lf\n\n", resultado1);

    invertido2 = 1.0f/num;
    for (i=0; i <729; i++){
        resultado2= resultado2+invertido2;
    }
    printf("resultado float e: %lf\n", resultado2);

return 0;
}

