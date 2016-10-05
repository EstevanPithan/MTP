#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i;
    char frase[256],aux[256];
    printf("Entre com uma frase: ");
    fgets(frase, sizeof(frase),stdin);

    for(i=0; frase[i]; i++)
    {
        if(frase[i]>=65 && frase[i]<=77 || frase[i]>=97 && frase[i]<=109)
        {
            aux[i]= frase[i]+13;
        }

        if(frase[i]>=78 && frase[i]<=90 || frase[i]>=110 && frase[i]<=122)
        {
            aux[i]= frase[i]-13;
        }

    }
    aux[i-1]='\0';
    printf("\nSua mensagem secreta eh: %s\n",aux);


    return 0;
}
