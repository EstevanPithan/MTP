#include <stdio.h>

int main()
{
    char palavra[256], aux;
    int i;
    printf("Entre com uma palavra: ");
    gets(palavra);
    aux = palavra;
    for (i=0; aux != NULL; i++)
        {
        aux = palavra[i];
        printf("\n%c", palavra[i]);
        }
    printf("\nSua palavra %s contem %d letras", palavra, i-1);
return 0;
}
