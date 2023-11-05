#include <stdio.h>
#include <stdlib.h>

void resultado(int tc, int tr, int ts) {

    float porcentagem_c, porcentagem_r, porcentagem_s;
    porcentagem_c = (tc*100.00) / (tc + tr + ts);
    porcentagem_r = (tr*100.00) / (tc + tr + ts);
    porcentagem_s = (ts*100.00) / (tc + tr + ts);

    printf ("Total: %d cobaias\n", tc + tr + ts);
    printf ("Total de coelhos: %d\n", tc);
    printf ("Total de ratos: %d\n", tr);
    printf ("Total de sapos: %d\n", ts);
    printf ("Percentual de coelhos: %.2f %%\n", porcentagem_c);
    printf ("Percentual de ratos: %.2f %%\n", porcentagem_r);
    printf ("Percentual de sapos: %.2f %%\n", porcentagem_s);
}

int main()
{
    int n, i, qtd;
    char tipo;
    int total_c = 0, total_r = 0, total_s = 0;

    scanf ("%d", &n);

    for (i=0; i<n ;i++) {
        scanf ("%d", &qtd);
        scanf (" %c", &tipo);

        switch (tipo) {
        case 'C':
            total_c = total_c + qtd;
            break;
        case 'R':
            total_r = total_r + qtd;
            break;
        case 'S':
            total_s = total_s + qtd;
            break;
        }
    }
    resultado(total_c,total_r,total_s);

    return 0;
}