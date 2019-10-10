#include <stdio.h>

int main() {
    double A;
    double B;
    double MEDIA;
    double pesoA = 3.5;
    double pesoB = 7.5;
    
    scanf("%lf", &A);
    scanf("%lf", &B);

    MEDIA = ((A * pesoA) + (B * pesoB)) / (pesoA + pesoB);
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
