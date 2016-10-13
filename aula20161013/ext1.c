#include<stdio.h>

int _TAMANHO= 0;
float *recebe_numero(float *num);
float media(float *aux);
float maior(float *aux);
float menor(float *aux);

int main()
{
    int op;
    float *num = NULL;
    printf("Programa para calcular media e dizer qual e o maior e o menor numero do vetor\n\n");

    do
    {
        printf("O que voce deseja fazer:\n\t1-Entrar com um novo numero.\n\t2-Sair do programa.\n\nSua escolha: ");
        scanf("%d", &op);

        if (op == 1)
        {
            system("CLS");
            num = recebe_numero(num);

            printf("\nSua media eh: %lf\n", media(num));
            printf("O maior numero eh: %lf\n", maior(num));
            printf("O menor numero eh: %lf\n\n", menor(num));
        }

        system("pause");
        system("CLS");

    }while(op!=2);

    return 0;
}

float *recebe_numero(float *num)
{
    _TAMANHO++;
    if(num == NULL)
    {
        num =(float*) malloc(_TAMANHO*sizeof(float));
    }

    else
    {
        num = realloc(num, _TAMANHO*sizeof(float));
    }

    printf("Qual o novo numero: ");
    scanf("%f", &num[_TAMANHO-1]);
    return num;
}

float media(float *aux)
{
    int i;
    float media=0;

    for(i=0; i<_TAMANHO; i++)
    {
        media = media + aux[i];
    }
    media= media/_TAMANHO;
    return media;
}

float maior(float *aux)
{
    int i;
    float maior=aux[0];

    for(i=0; i<_TAMANHO; i++)
    {
        if(aux[i]>maior)
        {
            maior = aux[i];
        }
    }
    return maior;
}

float menor(float *aux)
{
    int i;
    float menor=aux[0];

    for(i=0; i<_TAMANHO; i++)
    {
        if(aux[i] < menor)
        {
            menor = aux[i];
        }
    }
    return menor;
}
