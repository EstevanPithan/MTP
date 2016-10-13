#include <stdio.h>

int SOMA(int *A, int N, int soma);

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    int soma=0;
    printf("A soma do vetor e: %d\n", SOMA(A, N, soma));
	return 0;
}

int SOMA(int *A, int N, int soma)
{
    if (N >= 0)
    {
        soma = soma + A[N];
        SOMA(A, N-1, soma);
    }
    else
        return soma;
}
