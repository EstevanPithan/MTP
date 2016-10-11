#include<stdio.h>

void pares();
void impares();

int main()
{
    char op[256];

    do
    {
        printf("Voce deseja ver os numeros pares ou impares de 1 a 10? ");
        fgets(op, sizeof(op),stdin);
    } while(strncmp(op, "pares", 5) != 0 && strncmp(op, "impares", 6) != 0);
    if(strncmp(op, "pares", 5) == 0)
    {
        pares();
    }
    else
    {
        impares();
    }

    return 0;
}

void pares()
{
    printf("\nOs numeros pares de 1 a 10 sao: 2, 4, 6, 8, 10.");
}

void impares()
{
    printf("\nOs numeros impares de 1 a 10 sao: 1, 3, 5, 7, 9.");
}
