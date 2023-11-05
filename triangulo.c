#include <stdio.h>
int main(){

    double a,b,c, perimetro, area;
    scanf("%lf%lf%lf", &a,&b,&c);

    // verifica se forma ou nao um triangulo (se V calcula o perimetro se F calcula area do trapezio)
    if (a + b > c && a + c > b && b + c > a){
        perimetro = a + b + c;

        printf("Perimetro = %.1lf\n", perimetro);
    } else { //area trapezio
        area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }
    
}