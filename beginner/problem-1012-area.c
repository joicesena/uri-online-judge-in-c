#include <stdio.h>
#include <math.h>

int main() {
    double A;
    double B;
    double C;
    double areaTriangulo;
    double areaCirculo;
    double areaTrapezio;
    double areaQuadrado;
    double areaRetangulo;
    double pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    areaTriangulo = (A * C) / 2;
    areaCirculo = pi * pow(C, 2);
    areaTrapezio = ((A + B) / 2) * C;
    areaQuadrado = pow(B, 2);
    areaRetangulo = A * B;

    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);

    return 0;
}
