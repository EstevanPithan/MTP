#include <stdio.h>

int main(){
    float A, B, C, media;
    printf("\nEntre com as tres notas (0 a 10) para o calculo da media: ");

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    while(1){
         if(A>=0 && A<=10){
            break;
        }
        else{
            printf("\nNumero incorreto, entre com um valor para a nota A de 0 a 10: ");
            scanf("%f", &A);
        }
    }
    while(1){
        if(B>=0 && B<=10){
            break;
        }
        else{
            printf("\nNumero incorreto, entre com um valor para a nota B de 0 a 10: ");
            scanf("%f", &B);
        }
    }
    while(1){
        if(C>=0 && C<=10){
            break;
        }
        else{
            printf("\nNumero incorreto, entre com um valor para a nota C de 0 a 10: ");
            scanf("%f", &C);
        }
    }

    media= (A*2+B*3+C*5)/10;
    printf("\nA media e: %f\n", media);
    return 0;
}
