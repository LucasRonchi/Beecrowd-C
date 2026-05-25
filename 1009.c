#include <stdio.h>


int main() {
    char nome[50];
    double fixo, vendas, salario;

    scanf("%s %lf %lf", &nome, &fixo, &vendas);

    salario = fixo + (vendas * 0.15);

    printf("TOTAL = R$ %.2f\n", salario);

    return 0;
}
