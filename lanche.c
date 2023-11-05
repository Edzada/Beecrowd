#include <stdio.h>
int main(){

    double cdg,qtd,preco;

    scanf("%lf%lf", &cdg,&qtd);

    if ( cdg == 1){ // Cachorro Quente
        preco = 4.00;
        printf("Total: R$ %.2lf\n", preco*qtd );
    }
    else if ( cdg == 2 ){ //X-Salada
        preco = 4.50;
        printf("Total: R$ %.2lf\n", preco *qtd);
    }
     else if ( cdg == 3 ){ //X-bacon
        preco = 5.00;
        printf("Total: R$ %.2lf\n", preco *qtd);
    }
     else if ( cdg == 4){ // Torrada simples
        preco = 2.00;
        printf("Total: R$ %.2lf\n", preco *qtd);
    }
     else if ( cdg == 5){ //refrigerante
        preco = 1.50;
        printf("Total: R$ %.2lf\n", preco *qtd);
    }

    return 0;
}