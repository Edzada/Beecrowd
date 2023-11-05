#include <stdio.h>

int main() {
    int cpf[4];

    // Ler os dados do CPF
    scanf("%d.%d.%d-%d", &cpf[0], &cpf[1], &cpf[2], &cpf[3]);

    // Imprimir os números do CPF em linhas separadas
    printf("%03d\n", cpf[0]);
    printf("%03d\n", cpf[1]);
    printf("%03d\n", cpf[2]);
    printf("%02d\n", cpf[3]);

    return 0;
}
