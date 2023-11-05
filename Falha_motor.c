#include <stdio.h>
int main(){     
    
    int N, queda = 0;
    scanf("%d", &N);

    int R[N];
    for ( int i = 0; i<N; i++){
        scanf("%d", &R[i]);
    }

    for ( int i = 1; i < N; i++){
        if ( R[i] < R[i-1]){
            queda = i + 1;
            break;
        }
    }
    printf("%d\n", queda);


    return 0;
}