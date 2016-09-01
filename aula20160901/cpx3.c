#include <stdio.h>
#include <complex.h>
#include <math.h>

int main (){
    double complex z1, z2, raiz, raiz2;
    double preal, pimag;

    printf("Digite a parte real de z1: ");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria de z1: ");
    scanf("%lf", &pimag);

    z1 = preal + pimag*I; //o I pode ser minusculo também
    z2 = preal - pimag*I;

    raiz = sqrt(z1);
    raiz2 = sqrt(z2);

    printf("Raiz e:%lf + %lf*I\n",creal(raiz),cimag(raiz));
    printf("Raiz e :%lf /_ %lf rad\n", cabs(raiz),carg(raiz));

    printf("Raiz do conjugado e:%lf + %lf*I\n",creal(raiz),cimag(raiz));
    printf("Raiz do conjugado e :%lf /_ %lf rad\n", cabs(raiz2),carg(raiz2));

return 0;
}


