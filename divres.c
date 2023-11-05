#include <stdio.h>

int main() {
    int x, y, i;
    scanf("%d %d", &x, &y);
    if (x > y) {// garante y > x
        int temp = x;
        x = y;
        y = temp;
    }
    for (i = x+1; i < y; i++) {
        if (i % 5 == 3 || i % 5 == 2 ) {
           printf("%d\n", i) ;
        }
    }
   
    return 0;
}