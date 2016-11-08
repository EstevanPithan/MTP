#include <stdio.h>
#include <math.h>
#define N 5


float media(float nums[N]);
float desvio_padrao(float nums[N], float media);

int main()
{
    float nums[N];
    int i;
    for(i = 0; i < N; i++)
    {
        printf("Entre com elemento (%d): ", i);
        scanf("%f",&nums[i]);
    }

    printf("A media eh: %g \nO desvio padrão(populacao) eh: %g", media(nums), desvio_padrao(nums, media(nums)));

    return 0;
}
float media(float nums[N])
{
    int i;
    float media=0;
    for(i = 0; i < N; i++)
    {
        media = media + nums[i];
    }
    return media/N;
}
float desvio_padrao(float nums[N], float media)
{
    int i;
    float desvio_padrao=0, aux = 0;
    for(i = 0; i < N; i++)
    {
        aux = aux + pow(nums[i]-media,2);
    }
    desvio_padrao=sqrt(aux/(N-1));
    return desvio_padrao;
}
