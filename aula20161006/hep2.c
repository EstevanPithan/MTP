#include <stdio.h>


void imprimeMatriz(float **matriz, int n, int m);
void imprimeTransposta(float **matriz, int n, int m);
float **AlocarMatriz (int m, int n);

int main()
{
    float **matriz;
    int i, j, n, m, tam;

    printf("Entre com o tamanho da matriz no formato NxM: ");
    scanf("%dx%d", &n, &m);
    matriz = AlocarMatriz (n, m);
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
            printf("Entre com elemento (%d,%d): ", i, j);
            scanf("%f",(&matriz[i][j]));
        }
    imprimeMatriz(matriz, n, m);
    printf("\nA transposta e: \n");
    imprimeTransposta(matriz, n, m);
    return 0;
}

void imprimeMatriz(float **matriz, int n, int m)
 {
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            printf("%g%c", matriz[i][j],(j == m-1)? '\n' : '\t');
}

void imprimeTransposta(float **matriz, int n, int m)
{
    int i, j;
    for(j = 0; j < m; j++)
        for(i = 0; i < n; i++)
            printf("%g%c", matriz[i][j],(i == n-1)? '\n' : '\t');
}

float **AlocarMatriz (int n, int m)
{
  float **v;  /* ponteiro para a matriz */
  int   i;    /* variavel auxiliar      */
  if (n < 1 || m < 1) { /* verifica parametros recebidos */
     printf ("** Erro: Parametro invalido **\n");
     return (NULL);
     }
  /* aloca as linhas da matriz */
  v = (float **) calloc (n, sizeof(float *));
  if (v == NULL) {
     printf ("** Erro: Memoria Insuficiente **");
     return (NULL);
     }
  /* aloca as colunas da matriz */
  for ( i = 0; i < n; i++ ) {
      v[i] = (float*) calloc (m, sizeof(float));
      if (v[i] == NULL) {
         printf ("** Erro: Memoria Insuficiente **");
         return (NULL);
         }
      }
  return (v); /* retorna o ponteiro para a matriz */
}
