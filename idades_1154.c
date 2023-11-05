#include <stdio.h>

int main() {
    int idade, soma = 0, cont = 0;
    float media;

    
    scanf("%d", &idade);

    while (idade >= 0) {
        soma += idade;
        cont++;

        
        scanf("%d", &idade);
    }

    media = (float) soma / cont;

    printf("%.2f", media);

    return 0;
}
