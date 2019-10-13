#include <stdio.h>
#include <math.h>

int main() {
    double raioEsfera;
    double volumeEsfera;
    double pi = 3.14159;

    scanf("%lf", &raioEsfera);

    volumeEsfera = ((double) 4/3) * pi * pow(raioEsfera, 3);
    printf("VOLUME = %.3lf\n", volumeEsfera);

    return 0;
}

