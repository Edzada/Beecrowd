#include <stdio.h>
int main(){

double A,B,C;

scanf("%lf %lf %lf", &A,&B,&C);
 
 double t,c,tp,q,r;
 double pi = 3.14159;

 t = (A * C)/2;
 c = pi * C * C;
 tp = ((A+B)*C)/2;
 q = B*B;
 r = A*B;

 printf("TRIANGULO: %.3lf\n", t);
 printf("CIRCULO: %.3lf\n", c);
 printf("TRAPEZIO: %.3lf\n", tp);
 printf("QUADRADO: %.3lf\n", q);
 printf("RETANGULO: %.3lf\n", r);
    return 0;
}
