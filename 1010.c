#include <stdio.h>


int main() {
    int code, count;
    double value, total;

    scanf("%d %d %lf", &code, &count, &value);
    total = count * value;

    scanf("%d %d %lf", &code, &count, &value);
    total += count * value;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
