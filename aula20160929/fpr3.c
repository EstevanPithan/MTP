#include <stdio.h>
#include <stdlib.h>

void igual(int *A, int *B, int n, int m);

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);

    igual(A, B, n, m);


    return 0;
}

void igual(int *A, int *B, int n, int m)
{
    int tam=0, i, j, k=0;
    int *aux = (int*) malloc(tam * sizeof(int));
    for(i=0; i < n;i++)
    {
        for(j=0; j < m; j++)
        {
            if(A[i] == B[j])
            {
                aux[tam]= A[i];
                tam++;
            }
        }
    }

    realloc(*aux, tam * sizeof(int));

    for(i=0; i < tam; i++)
    {
        printf("%d, ", aux[i]);
    }
    free(aux);
}
