#include <stdio.h>
#include <complex.h>

int main (){
    double complex z1, z2, soma, mult;
    double preal, pimag;

    printf("Digite a parte real de z1: ");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria de z1: ");
    scanf("%lf", &pimag);

    z1 = preal + pimag*I; //o I pode ser minusculo também

    printf("Digite a parte real de z2: ");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria de z2: ");
    scanf("%lf", &pimag);

    z2 = preal + pimag*I;

    soma = z1 + z2;
    mult = z1*z2;

    printf("Soma e :%lf + %lf*I\n",creal(soma),cimag(soma));
    printf("Soma e :%lf /_ %lf rad\n", cabs(soma),carg(soma));
    printf("Produto e:%lf + %lf*I\n",creal(mult),cimag(mult));
    printf("produto e :%lf /_ %lf rad\n", cabs(mult),carg(mult));

return 0;
}

