#include <stdio.h>

int obter_quadrante(int x, int y) {
    if (x > 0 && y > 0) {
        return 1;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else if (x > 0 && y < 0) {
        return 4;
    } else {
        return 0;
    }
}

int main() {
    int x, y;

    while (1) {
        scanf("%d %d", &x, &y);

        if (x == 0 || y == 0) {
            break;
        }

        int quadrante = obter_quadrante(x, y);
        
        switch (quadrante) {
            case 1:
                printf("primeiro\n");
                break;
            case 2:
                printf("segundo\n");
                break;
            case 3:
                printf("terceiro\n");
                break;
            case 4:
                printf("quarto\n");
                break;
        }
    }

    return 0;
}
