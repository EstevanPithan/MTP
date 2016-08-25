#include <stdio.h>

int main(){
    float lado, area_quadrado;
    printf("Entre com o lado do quadrado: ");
    scanf("%f", &lado);
    area_quadrado= lado*lado;
    printf("\nA area e: %.2f\n", area_quadrado);
    return 0;
}
