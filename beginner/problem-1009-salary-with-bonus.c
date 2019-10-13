#include <stdio.h>

int main() {
    char nomeVendedor[61];
    double salarioFixo;
    double totalDeVendas;
    double bonus;
    double salarioTotal;

    scanf("%s", &nomeVendedor);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalDeVendas);

    bonus = totalDeVendas * ((double) 15/100);
    salarioTotal = salarioFixo + bonus;

    printf("TOTAL = R$ %.2lf\n", salarioTotal);

    return 0;
}
