#include <stdio.h>
int main (){

    int N[20];
    int temp;
    
    for ( int i = 0; i<=19; i++){
        scanf("%d", &N[i]);
    }
    
    for ( int i = 0 ; i <= 9; i++){
        // troca de N[i] por N[19 - i]
        temp = N[i];
        N[i] = N[19-i];
        N[19-i] = temp;
    }

    for ( int i = 0; i<=19; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}