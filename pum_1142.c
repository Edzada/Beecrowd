#include <stdio.h>

void imprimirPUM(int numero) {
    for (int i = 1; i <= numero * 4; i += 4) {
        printf("%d ", i);
        printf("%d ", i + 1);
        printf("%d ", i + 2);
        printf("PUM\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    imprimirPUM(N);

    return 0;
}
