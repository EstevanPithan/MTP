#include<stdio.h>

#define RECEBER(p) \
    ({printf("Entre com o valor de R: "); scanf("%d", &p.r); \
      printf("Entre com o valor de G: "); scanf("%d", &p.g); \
      printf("Entre com o valor de B: "); scanf("%d", &p.b);})

#define CONVERTER(a,s) \
    ({s.y= 16 + (65.481*a.r + 128.553*a.g + 24.966*a.b); \
      s.cp= 128 - (37.797*a.r - 74.203*a.g + 112.0*a.b); \
      s.cr= 128 + (112.0*a.r - 93.786*a.g - 18.214*a.b);})

#define MOSTRA(p) \
    ({printf("(%g; %g; %g)", p.y,p.cp,p.cr);})

struct RGB{
    float r;
    float g;
    float b;
}RGB1;
struct YCpCr{
    float y;
    float cp;
    float cr;
}YCpCr1;

int main(){

    RECEBER(RGB1);
    CONVERTER(RGB1,YCpCr1);
    MOSTRA(YCpCr1);


    return 0;
}
