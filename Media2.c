#include <stdio.h>

int main(){
    double num1, num2, num3, media;

    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);
    media = ((2*num1)+(3*num2)+(5*num3))/10;
    printf("MEDIA = %.1f\n", media);
    return 0;
}