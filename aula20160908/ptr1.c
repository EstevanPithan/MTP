#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    unsigned int numero = 0xFACA8421;
    unsigned char *p = NULL, *q; //inicializar ponteiros

    printf ("O endereco da variavel e: %p\nO conteudo da variavel e: %X = %u\n", &numero, numero, numero);
    p = q = (unsigned char *)&numero;

    for(; p < q + sizeof(int) ;p++)
        printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, *p);

    return 0;
}




/*#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    unsigned int numero = 0xFACA8421;
    unsigned char *p = NULL; //inicializar ponteiros

    printf ("O endereco da variavel e: %p\nO conteudo da variavel e: %X = %u\n", &numero, numero, numero);
    p = (unsigned int)&numero;

    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, *p, *p);
    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, p[0];
    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, p[1];
    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, p[2];
    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, p[3];


    return 0;
}*/





/*#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    unsigned int numero = 0xFACA8421;
    unsigned char *p = NULL; //inicializar ponteiros

    printf ("O endereco da variavel e: %p\nO conteudo da variavel e: %X = %u\n", &numero, numero, numero);
    p = (unsigned int)&numero;

    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, *p, *p);
    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, *(p+1));
    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, *(p+2));
    printf ("\nO endereco da variavel e: %p\nO conteudo da variavel e: %X\n", p, *(p+3));


//    for (i=0; )

    return 0;
}
*/
