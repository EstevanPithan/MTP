#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j=0;
    char frase[256], aux[256];
    printf("Entre com uma frase: ");
    gets(frase);

    for(i=0; frase[i]; i++)
    {
        if(frase[i] != ' ')
        {
            aux[j] = toupper(frase[i]);
            j++;
            aux[j] ='\0';
        }
    }

    for(i=0; aux[i] ; j--, i++)
    {
        frase[i] = aux[j-1];
    }

    frase[i] = '\0';

    if(strcmp(aux, frase) == 0)
    {
        printf("\nSim!!!\n");
    }

    else
    {
        printf("\nNao!!!\n");
    }

    return 0;
}
