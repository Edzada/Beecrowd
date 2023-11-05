#include <stdio.h>
int main(){

    int N[10]; // V <=50

    scanf("%d", &N[0]);

    for ( int i = 1 ; i<=9 ; i++){
        N[i] = N[i-1]*2;
    }
    for ( int i = 0; i <=9; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}