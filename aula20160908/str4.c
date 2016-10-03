#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char frase[256], aux[256];
    printf("Entre com uma frase: ");
    gets(frase);

    for(i=0; frase[i]; i++)
    {
        if(frase[i] == 'a')
        {
            aux[i]='n';
        }
        if(frase[i] == 'A')
        {
            aux[i]='N';
        }
        if(frase[i] == 'b')
        {
            aux[i]='o';
        }
        if(frase[i] == 'B')
        {
            aux[i]='O';
        }
        if(frase[i] == 'c')
        {
            aux[i]='p';
        }
        if(frase[i] == 'C')
        {
            aux[i]='P';
        }
        if(frase[i] == 'd')
        {
            aux[i]='q';
        }
        if(frase[i] == 'D')
        {
            aux[i]='Q';
        }
        if(frase[i] == 'e')
        {
            aux[i]='r';
        }
        if(frase[i] == 'E')
        {
            aux[i]='R';
        }
        if(frase[i] == 'f')
        {
            aux[i]='s';
        }
        if(frase[i] == 'F')
        {
            aux[i]='S';
        }
        if(frase[i] == 'g')
        {
            aux[i]='t';
        }
        if(frase[i] == 'G')
        {
            aux[i]='T';
        }
        if(frase[i] == 'h')
        {
            aux[i]='u';
        }
        if(frase[i] == 'H')
        {
            aux[i]='U';
        }
        if(frase[i] == 'i')
        {
            aux[i]='v';
        }
        if(frase[i] == 'I')
        {
            aux[i]='V';
        }
        if(frase[i] == 'j')
        {
            aux[i]='w';
        }
        if(frase[i] == 'J')
        {
            aux[i]='W';
        }
        if(frase[i] == 'k')
        {
            aux[i]='x';
        }
        if(frase[i] == 'K')
        {
            aux[i]='X';
        }
        if(frase[i] == 'l')
        {
            aux[i]='y';
        }
        if(frase[i] == 'L')
        {
            aux[i]='Y';
        }
        if(frase[i] == 'm')
        {
            aux[i]='z';
        }
        if(frase[i] == 'M')
        {
            aux[i]='Z';
        }
        if(frase[i] == 'n')
        {
            aux[i]='a';
        }
        if(frase[i] == 'N')
        {
            aux[i]='A';
        }
        if(frase[i] == 'o')
        {
            aux[i]='b';
        }
        if(frase[i] == 'O')
        {
            aux[i]='B';
        }
        if(frase[i] == 'p')
        {
            aux[i]='c';
        }
        if(frase[i] == 'P')
        {
            aux[i]='C';
        }
        if(frase[i] == 'q')
        {
            aux[i]='d';
        }
        if(frase[i] == 'Q')
        {
            aux[i]='D';
        }
        if(frase[i] == 'r')
        {
            aux[i]='e';
        }
        if(frase[i] == 'R')
        {
            aux[i]='E';
        }
        if(frase[i] == 's')
        {
            aux[i]='f';
        }
        if(frase[i] == 'S')
        {
            aux[i]='F';
        }
        if(frase[i] == 't')
        {
            aux[i]='g';
        }
        if(frase[i] == 'T')
        {
            aux[i]='G';
        }
        if(frase[i] == 'u')
        {
            aux[i]='h';
        }
        if(frase[i] == 'U')
        {
            aux[i]='H';
        }
        if(frase[i] == 'v')
        {
            aux[i]='i';
        }
        if(frase[i] == 'V')
        {
            aux[i]='I';
        }
        if(frase[i] == 'w')
        {
            aux[i]='j';
        }
        if(frase[i] == 'W')
        {
            aux[i]='J';
        }
        if(frase[i] == 'x')
        {
            aux[i]='k';
        }
        if(frase[i] == 'X')
        {
            aux[i]='K';
        }
        if(frase[i] == 'y')
        {
            aux[i]='l';
        }
        if(frase[i] == 'Y')
        {
            aux[i]='L';
        }
        if(frase[i] == 'z')
        {
            aux[i]='m';
        }
        if(frase[i] == 'Z')
        {
            aux[i]='M';
        }
    }

    printf("%s", aux);
    return 0;
}
