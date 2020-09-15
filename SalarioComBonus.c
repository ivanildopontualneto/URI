#include <stdio.h>

int main(){
    char nome_vendedor[16];
    double salario_fixo, total_vendas, salario_bonus;

    scanf("%s", nome_vendedor);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    salario_bonus = salario_fixo+(total_vendas*0.15);

    printf("TOTAL = R$ %.2f\n", salario_bonus);
    return 0;
}