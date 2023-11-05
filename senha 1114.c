#include <stdio.h>

int main() {
    int senha_correta = 2002;
    int senha;

    while (1) {
        scanf("%d", &senha);
        if (senha == senha_correta) {
            printf("Acesso Permitido\n");
            break;
        }
        else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}
