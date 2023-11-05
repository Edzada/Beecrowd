#include <stdio.h>
int main(){
    // tempo em horas, velo em km/h
    double tempo, velo_media, distancia,litro_med;

    scanf("%lf%lf", &tempo,&velo_media);

    litro_med = 12; // o carro faz 12km/L

    distancia = (velo_media * tempo)/ litro_med;

    printf("%.3lf", distancia);

    return 0;

}