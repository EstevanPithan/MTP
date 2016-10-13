#include <stdio.h>

float COMBINACAO(float bolas, float retiradas, float combinacao);

int main()
{
    float bolas, retiradas, combinacao =0;
    printf("Entre com o numero total de bolas: ");
    scanf("%f", &bolas);
    printf("Entre com o numero de bolas retiradas: ");
    scanf("%f", &retiradas);
    printf("\nCombinacoes= %.1lf", COMBINACAO(bolas, retiradas, combinacao));
	return 0;
}

float COMBINACAO(float a, float n, float combinacao)
{
    if (n == 0)
    {
        combinacao = 1;
    }
    else
    {
        combinacao = (a/n)*COMBINACAO(a-1.0, n-1.0, combinacao);
    }
    return combinacao;
}

