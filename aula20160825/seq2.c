#include <stdio.h>

int main(){
    float base, altura, area_triangulo;
    printf("Entre com a base e altura do triangulo: ");
    scanf("%f", &base);
    scanf("%f", &altura);
    area_triangulo=base*altura/2;
    printf("\nA area e: %.2f\n", area_triangulo);
    return 0;
}
