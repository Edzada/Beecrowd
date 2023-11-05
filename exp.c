#include <stdio.h>

void relatorio(int tc, int tr, int ts){
    printf("Total: %d cobaias\n", tc+tr+ts);
    printf("Total de coelhos: %d\n", tc);
    printf("Total de ratos: %d\n", tr);
    printf("Total de sapos: %d\n", ts);
    printf("Percentual de coelhos: %.2f %\n", tc * 100.0/ (tc+tr+ts));
    printf("Percentual de ratos: %.2f %\n", tr * 100.0/ (tc+tr+ts));
    printf("Percentual de sapos: %.2f %\n", ts * 100.0/ (tc+tr+ts));
}
int main()
{
    int n, qtd, tsap=0, trat=0, tco=0;
    char tipo;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &qtd, &tipo);
        if (tipo == 'C'|| tipo == 'c')
        {
            tco += qtd;
        }
        else if (tipo == 'R'|| tipo == 'r')
        {
            trat += qtd;
        }
        else if (tipo == 'S'|| tipo == 's')
        {
            tsap += qtd;
        } 
    }
    relatorio(tco, trat, tsap);
    
    return 0;
}