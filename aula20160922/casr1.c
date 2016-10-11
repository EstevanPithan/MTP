#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int sort_num();

int main()
{
    srand(time(0));
    int num, aux, i;

    printf("Entre com um numero de 1 a 10: ");
    scanf("%d", &num);
    for(i=0; i<10; i++)
    {
        aux = sort_num();
        printf("\n%d-Sorteio -> ",i+1);
        if(aux == num)
        {
            printf("Parabens!!");
        }
        else
        {
            printf("Deu errado!!!");
        }
    }
    return 0;
}

int sort_num()
{
    int sort=rand()%10 + 1;
    return sort;
}
