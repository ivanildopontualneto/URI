#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, pi = 3.14159, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    triangulo = (a*c)/2;
    circulo = pi*pow(c,2);
    trapezio = ((a+b)*c)/2;
    quadrado = pow(b,2);
    retangulo = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;
}