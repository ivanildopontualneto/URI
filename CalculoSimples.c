#include <stdio.h>

int main(){
    int codigo_peca1, codigo_peca2, numero_pecas1, numero_pecas2;
    double valor_peca1, valor_peca2, valor_total;

    scanf("%d", &codigo_peca1);
    scanf("%d", &numero_pecas1);
    scanf("%lf", &valor_peca1);
    scanf("%d", &codigo_peca2);
    scanf("%d", &numero_pecas2);
    scanf("%lf", &valor_peca2);

    valor_total = (numero_pecas1*valor_peca1) + (numero_pecas2*valor_peca2);

    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;
}