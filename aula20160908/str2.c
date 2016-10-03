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
        frase[i] = toupper(frase[i]);
    }

    if(frase[0] != ' ')
    {
       aux[j] = frase [0];
       j++;
    }

    for(i=0; frase[i]; i++)
    {
        if(frase[i] == ' ' && frase[i+1] != ' ')
        {
            aux[j] = frase [i+1];
            j++;
        }
    }
    //aux[j]='\0';
    printf("\nSua mensagem secreta e: %s\n", aux);
    return 0;
}
