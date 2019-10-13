#include <stdio.h>

int main() {
    int numeroFuncionario;
    int horasTrabalhadas;
    float valorPorHoraTrabalhada;
    float salario;

    scanf("%d", &numeroFuncionario);
    scanf("%d", &horasTrabalhadas);
    scanf("%f", &valorPorHoraTrabalhada);

    salario = horasTrabalhadas * valorPorHoraTrabalhada;

    printf("NUMBER = %d\n", numeroFuncionario);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
