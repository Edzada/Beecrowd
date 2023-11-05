#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int area[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &area[i]);
    }

    int condicao = 1;

    if (n == 2 && area[0] == area[1]) {
        condicao = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if ((area[i] >= area[i-1] && area[i-1] >= area[i-2]) || (area[i] <= area[i-1] && area[i-1] <= area[i-2])) {
                condicao = 0;
                break;
            }
        }
    }

    printf("%d\n", condicao);

    return 0;
}
