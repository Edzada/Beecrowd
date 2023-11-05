#include <stdio.h>

int main() {
    int x, y, i, soma = 0;
    scanf("%d %d", &x, &y);

    for (i = x; i <= y; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }

    printf("%d", soma);

    return 0;
}
