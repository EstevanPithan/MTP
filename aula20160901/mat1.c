#include<stdio.h>
#include<math.h>

int main(){

    double xponto1, yponto1, xponto2, yponto2, distancia;

    printf("Digite a coordenada do primeiro ponto: ");
    scanf("%lf", &xponto1);
    scanf("%lf", &yponto1);
    printf("\nDigite a coordenada do segundo ponto: ");
    scanf("%lf", &xponto2);
    scanf("%lf", &yponto2);

    distancia = sqrt(pow(xponto2-xponto1, 2.)+ pow(yponto2-yponto1, 2.));
    printf("\nA distancia e: %lf", distancia);
    return 0;
}
