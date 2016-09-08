#include <stdio.h>
#include <stdlib.h>


int main(){

    int i, vet[10], soma=0, produ=1;


    printf("Digite 10 numeros reais:\n");

    for(i=0; i != 10; i++){
      scanf("%d", &vet[i]);
      soma = soma + vet[i];
      produ = produ*vet[i];
    }

    printf("A soma eh: %d\nO produto eh: %d", soma, produ);

return 0;
}



