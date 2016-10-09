#include <stdio.h>
#include <conio.h>

enum meses_do_ano {janeiro = 1, fevereiro = 2, marco = 3, abril = 4, maio = 5, junho =6,
     julho = 7, agosto = 8, setembro = 9, outubro = 10, novembro = 11, dezembro = 12}mes;

int main()
{
    int mes;
    printf("Digite o numero do mes: ");
    scanf("%d",&mes);

    if((mes >= janeiro) && (mes <= dezembro))
    {
      switch(mes)
      {
          case janeiro:
               printf("%d - Janeiro",mes);
          break;

          case fevereiro:
               printf("%d - Fevereiro",mes);
          break;

          case marco:
               printf("%d - Marco",mes);
          break;

          case abril:
               printf("%d - Abril",mes);
          break;

          case maio:
               printf("%d - Maio",mes);
          break;

          case junho:
               printf("%d - Junho",mes);
          break;

          case julho:
               printf("%d - Julho",mes);
          break;

          case agosto:
               printf("%d - Agosto",mes);
          break;

          case setembro:
               printf("%d - Setembro",mes);
          break;

          case outubro:
               printf("%d - Outubro",mes);
          break;

          case novembro:
               printf("%d - Novembro",mes);
          break;

          case dezembro:
               printf("%d - Dezembro",mes);
          break;

      }
    }
    else
        {
           printf("Valor INVALIDO!!!\n");
        }
return 0;
}
