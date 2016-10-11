#include <stdio.h>
#include <math.h>


float delta(float a, float b, float c);
float raiz_eq(float delta, float a, float b);


int main() {

    float a, b, c, delta_aux;
    printf("Entre com os valores de a, b, c da equacao do segundo grau: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta_aux = delta(a,b,c);
    raiz_eq(delta_aux, a, b);
   // printf("%lf  %lf", raiz1, raiz2);
    return 0;
}

float delta(float a, float b, float c)
{
    float delta = pow(b,2) - 4*a*c;
    return delta;
}

float raiz_eq(float delta, float a, float b)
{
    float raiz1, raiz2, complx_aux;
    if(delta > 0)
    {
         raiz1 = (-b + sqrt(delta))/(2*a);
         raiz2 = (-b - sqrt(delta))/(2*a);
         printf("\nRaiz 1 = %lf, Raiz 2 = %lf\n", raiz1, raiz2);
    }
    else if(delta == 0)
    {
        raiz1 = raiz2 = -b/(2*a);
        printf("\nRaiz 1 = %lf, Raiz 2 = %lf\n", raiz1, raiz2);
    }
    else
    {
         raiz1 = -b/(2*a);
         complx_aux = sqrt(-delta)/(2*a);
         printf("\nRaiz 1 = %lf + I*%lf, Raiz 2 =%lf - I*%lf\n", raiz1, complx_aux, raiz1, complx_aux);
    }

    return 0;
}


