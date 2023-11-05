#include <stdio.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    // calculo das areas
    double area_tri = (A * C) / 2.0;
    double area_circ = (3.14159 * C * C);
    double area_trap = ((A + B) * C) / 2.0;
    double area_quad = (B * B);
    double area_ret = A * B;

    // impressão dos resultados 
    printf("TRIANGULO: %.3lf\n", area_tri);
    printf("CIRCULO: %.3lf\n", area_circ);
    printf("TRAPEZIO: %.3lf\n", area_trap);
    printf("QUADRADO: %.3lf\n", area_quad);
    printf("RETANGULO: %.3lf\n", area_ret);
    
    return 0;
}

