#include <stdio.h>
#include <ctype.h>

int main (){

    char frase[256];
    char investigador;
    int indice = 0;

    printf("Entre com uma frase: ");
    gets (frase);
    investigador=frase[indice];
    while (investigador != '\0'){
        frase[indice] = toupper(investigador);
        indice++;
        investigador = frase[indice];
    }
    printf("\n\nA frase em maiusculo e:\n%s\n", frase);
    return 0;
}
