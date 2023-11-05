#include <stdio.h>
int main()
{

    int fun, horas;
    double valorhora, salario;

    scanf("%d%d%lf", &fun, &horas, &valorhora);

    salario = horas * valorhora;

    printf("NUMBER = %d\n", fun);
    printf("SALARY = U$ %.2lf", salario);

    return 0;
}