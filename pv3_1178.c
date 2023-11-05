#include <stdio.h>
int main (){

    double X, N[100]; 

    scanf("%lf", &X);
    N[0] = X;
    for ( int i = 1 ; i<=99 ; i++){
        N[i] = N[i-1]/2.0;
}
    for ( int i = 0; i <=99; i++){
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}
