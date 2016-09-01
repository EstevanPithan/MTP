#include<stdio.h>
#include<stdlib.h>  //RAND_MAX
#include<time.h>
#include<float.h>

int main(){
    srand(time(0));
    int i;
    double delta = DBL_EPSILON/4.0;
    if(1.0 > 1.0 - DBL_EPSILON/4.0)
        printf("Maior\n");
    else
        printf("Igual?!?!?! delta = %le\n", delta);

    for(i=0; i<10; i++)
            printf("\n%f\n", (float)rand()/(float)RAND_MAX);
    return 0;
}
