#include <stdio.h>

int main() {
    int codigoPeca1;
    int numeroPecas1;
    int codigoPeca2;
    int numeroPecas2;
    float valorUnitarioPeca1;
    float valorUnitarioPeca2;
    float valorTotal;

    scanf("%d %d %f", &codigoPeca1, &numeroPecas1, &valorUnitarioPeca1);
    scanf("%d %d %f", &codigoPeca2, &numeroPecas2, &valorUnitarioPeca2);

    valorTotal = (numeroPecas1 * valorUnitarioPeca1) + (numeroPecas2 * valorUnitarioPeca2);
    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);

    return 0;
}

