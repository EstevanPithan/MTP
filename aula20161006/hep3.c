#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int tamanho = 0;
char * iniciaTexto();
char * recebeTexto();
int main()
{
    char * texto;
    char * aux;
    int i;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = recebeTexto();
    aux = (char *) malloc(tamanho);

    for(i=0; texto[i] != '\0'; i++)
    {
        aux[i] = toupper(texto[i]);
    }
    aux[tamanho] = '\0';
    printf("\n::: Na memoria :::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    printf("\nTexto em maiusculo: %s\n", aux);
    free(texto);
    return 0;
}

char * iniciaTexto()
{
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}

char * recebeTexto()
{
    char * texto = iniciaTexto();
    char * aux;
    int c;
    do
    {
        c = getchar();
        if(c != '#')
        {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL)
            {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    return texto;
}
