#include <stdio.h>
#include <complex.h>

int main (){
    double complex z1, z2, mult;
    double preal, pimag;

    printf("Digite a parte real: ");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria: ");
    scanf("%lf", &pimag);

    z1 = preal + pimag*I; //o I pode ser minusculo também
    z2 = preal - pimag*I;

    mult = z1*z2;

    printf("O produto pelo conjugado e:%lf + %lf*I\n",creal(mult),cimag(mult));
    printf("O produto pelo conjugado e :%lf /_ %lf rad\n", cabs(mult),carg(mult));

return 0;
}

