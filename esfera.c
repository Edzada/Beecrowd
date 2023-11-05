#include <stdio.h>
int main()
{
    double raio = 0;
    double volume = 0;
    double pi = 3.14159;

    scanf("%lf", &raio);

    volume = 4 * pi * raio * raio * raio / 3;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
