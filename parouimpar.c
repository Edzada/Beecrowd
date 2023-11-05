#include <stdio.h>

int main() {
    int p, j1, j2, r, a, s;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    s = j1 + j2;

    if (r == 1) { // jogador 1 roubou
        if (a == 1) { // jogador 2 acusou o roubo
            printf("Jogador 2 ganha!\n");
        } else { // jogador 2 não acusou o roubo
            printf("Jogador 1 ganha!\n");
        }
    } else { // jogador 1 não roubou
        if ((s % 2 == 0 && p == 1) || (s % 2 == 1 && p == 0)) { // jogador 1 ganhou
            printf("Jogador 1 ganha!\n");
        } else { // jogador 2 ganhou
            printf("Jogador 2 ganha!\n");
        }
    }

    return 0;
}