#include <stdio.h>


int main()
{
    double codigo, qtd, preco;
    scanf("%lf %lf", &codigo, &qtd);
    
    if(codigo == 1)
    {
        preco = 4.00;
        printf("Total: R$ %.2lf\n", preco*qtd);
    }
    else if(codigo == 2)
    {
        preco = 4.50;
        printf("Total: R$ %.2lf\n", preco*qtd);
    }
     else if(codigo == 3)
    {
        preco = 5.00;
        printf("Total: R$ %.2lf\n", preco*qtd);
    }
     else if(codigo == 4)
    {
        preco = 2.00;
        printf("Total: R$ %.2lf\n", preco*qtd);
    }
     else if(codigo == 5)
    {
        preco = 1.50;
        printf("Total: R$ %.2lf\n", preco*qtd);
    }

    return 0;
}