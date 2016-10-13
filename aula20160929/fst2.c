#include <stdio.h>

struct num_rac
{
    int num;
    int den;
};

struct num_rac soma_rac(int num1, int den1, int num2, int den2);

int main()
{
    struct num_rac num_rac1;
    struct num_rac num_rac2;
    struct num_rac resposta;

    printf("Entre com a soma de dois numeros racionais na forma num1/den1 + num2/den2: ");
    scanf("%d/%d + %d/%d", &num_rac1.num, &num_rac1.den, &num_rac2.num, &num_rac2.den);

    resposta = soma_rac(num_rac1.num, num_rac1.den, num_rac2.num, num_rac2.den);

    printf("\nA soma eh igual a %d/%d\n", resposta.num, resposta.den);

    return 0;
}

struct num_rac soma_rac(int num1, int den1, int num2, int den2)
{
    struct num_rac resposta;
    resposta.num = num1*den2 + num2*den1;
    resposta.den = den1*den2;
    return resposta;
}
