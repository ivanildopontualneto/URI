#include <stdio.h>

int main(){
    int numero, horas;
    double valor, salario;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valor);

    salario = valor*horas;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}