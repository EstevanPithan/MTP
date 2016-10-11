#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma();
int sort_num();


int main() {

    srand(time(0));
    int chances=0, res;
    printf("Bem vindo ao jogo de sorteio de dados: \n");
    system("PAUSE");
    while(chances < 3)
    {
        res = soma();
        if(res == 27)
        {
            printf("\nGANHOUUU!\n");
            chances = 3;
        }
        else
        {
            printf("\n%d-chance:\n\tSoma = %d.\n\tPerdeu!!!! HAHAHAHA\n", chances+1, res);
            chances++;
        }
    }

    return 0;
}

int sort_num()
{
    int num = (rand()%6)+1;
    return num;
}

int soma()
{
    int i, dado[]={0,0,0,0,0,0}, soma=0;

    for(i = 0; i<=4; i++)
    {
        dado[i]= sort_num();
        soma = soma + dado[i];
    }
    return soma;
}

