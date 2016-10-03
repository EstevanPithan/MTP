#include<stdio.h>

int main()
{
    int num,i,j, aux2, aux[100];
    printf("Entre com um numero: ");
    scanf("%d", &num);
    for (i=0; i!=100 ; i++)
    {
        aux[i] = 0;
    }
    j=0;
    for (i=1; i < num ; i++)
    {
        if(num%i == 0)
        {
            aux[j] = i;
            //printf("\n%d", aux[j]);
            j++;
        }
    }
    aux2=0;
    for (i=0; aux[i] !=0 ;i++)
    {
        aux2 = aux2 + aux[i];
        //printf("%d  ", aux2);
        //printf("%d  ", aux[i]);
    }
    if (aux2 == num)
    {
        printf("\n%d e perfeito\n", num);
        for (i=0; aux[i] !=0 ;i++)
        {
            printf("%d+", aux[i]);
        }
        printf("= %d", num);
    }

    else
        printf("\n%d nao e perfeito", num);

return 0;

}
