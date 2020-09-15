#include <stdio.h>

int main(){
    int num1, num2, num3, num4, diferenca;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    diferenca = (num1*num2 - num3*num4);
    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}