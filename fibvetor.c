#include <stdio.h>
int main(){
    int T,N;
    unsigned long long int Fib[61];

    Fib[0] = 0;
    Fib[1] = 1;
    
    for ( int i = 2; i <= 60; i++){
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    scanf("%d", &T);
    for (int i = 1; i <= T; i++){
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N,Fib[N]);    
    }

    return 0;
}