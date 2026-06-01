#include <stdio.h>


int main() {
    int reais, centavos;

    scanf("%d.%d", &reais, &centavos);

    int nota100 = reais / 100;
    reais = reais % 100;

    int nota50 = reais / 50;
    reais = reais % 50;

    int nota20 = reais / 20;
    reais = reais % 20;

    int nota10 = reais / 10;
    reais = reais % 10;

    int nota5 = reais / 5;
    reais = reais % 5;

    int nota2 = reais / 2;
    reais = reais % 2;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    int moeda100 = reais;

    int moeda50 = centavos / 50;
    centavos = centavos % 50;

    int moeda25 = centavos / 25;
    centavos = centavos % 25;

    int moeda10 = centavos / 10;
    centavos = centavos % 10;

    int moeda5 = centavos / 5;
    centavos = centavos % 5;

    int moeda1 = centavos / 1;
    centavos = centavos % 1;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda100);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);

    return 0;
}
