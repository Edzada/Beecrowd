#include <stdio.h>
int main(){

    double consumo,dist_total, comb_gasto; // dist em Km e Combustível em litros

    scanf("%lf%lf", &dist_total,&comb_gasto);

    // calculo do consumo 

    consumo = dist_total / comb_gasto;

    printf("%.3lf km/l\n", consumo);

    return 0;

}