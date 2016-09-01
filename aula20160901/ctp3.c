#include <stdio.h>
#include <ctype.h>

int main (){

    char frase[256];
    char investigador;
    int indice = 0, count=0;

    printf("Entre com uma frase: ");
    gets (frase);
    investigador=frase[indice];
    while (investigador != '\0'){
        indice++;
        investigador = frase[indice];
        count++;
    }
    printf("\n\nA frase tem %d caracteres\n", count);
    return 0;
}

