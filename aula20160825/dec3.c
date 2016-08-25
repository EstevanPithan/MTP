#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));

    int d1, d2, d3, resultado;
    printf("Pressione alguma tecla para sortear os dados");
    system ("pause");

    d1 = rand()%6 + 1;
    d2 = rand()%6 + 1;
    d3 = rand()%6 + 1;

    resultado = d1 + d2 + d3;
    printf("\nO numero do primeiro dado e: %d", d1);
    printf("\nO numero do segundo dado e: %d", d2);
    printf("\nO numero do terceiro dado e: %d", d3);
    printf("\n\nA soma dos dados e: %d", resultado);

    if(resultado==7 || resultado==11)
        printf("\n\nVOCE GANHOU!!!!\n\n");
    else
        printf("\n\nVOCE PERDEU!!!!\n\n");

    return 0;
}

