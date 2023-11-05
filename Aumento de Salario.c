#include <stdio.h>
int main (){

    double salario,reajuste, percentual, sal_atual;

    scanf("%lf", &salario);


    if (salario <= 400.00){
        percentual = 0.15;
        reajuste = salario * percentual;  
        sal_atual = salario + reajuste;   
    }
    else if ( salario >= 400.01 && salario <= 800.00){
        percentual = 0.12;
        reajuste = salario * percentual;
        sal_atual = salario + reajuste;
    }
    else if ( salario > 800.01 && salario <= 1200.00 ){
        percentual = 0.1;
        reajuste = salario * percentual;
        sal_atual = salario + reajuste;
    }
    else if ( salario > 1200.01 && salario <= 2000.00){
        percentual = 0.07;
        reajuste = salario * percentual;
        sal_atual = salario + reajuste;       
    }
    else if ( salario > 2000.00){
        percentual = 0.04;
        reajuste = salario * percentual;
        sal_atual = salario + reajuste;
    }

    printf("Novo salario: %.2lf\n", sal_atual);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.2lf %%\n",percentual*100);

    return 0;

}
/* codigo do chatgpt certo
#include <stdio.h>

int main() {
    double salario, reajuste, novo_salario;
    int percentual;

    scanf("%lf", &salario);

    if (salario <= 400.00) {
        percentual = 15;
    } else if (salario <= 800.00) {
        percentual = 12;
    } else if (salario <= 1200.00) {
        percentual = 10;
    } else if (salario <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    reajuste = salario * percentual / 100;
    novo_salario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}

*/