#include <stdio.h>

int main() {
    double A;
    double B;
    double C;
    double MEDIA;
    int pesoA = 2;
    int pesoB = 3;
    int pesoC = 5;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    MEDIA = ((A * pesoA) + (B * pesoB) + (C * pesoC)) / (pesoA + pesoB + pesoC);
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
