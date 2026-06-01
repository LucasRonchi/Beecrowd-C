#include <stdio.h>


int main() {
    int distancia;
    double litro;

    scanf("%d %lf", &distancia, &litro);

    double consumo = distancia / litro;

    printf("%.3f km/l\n", consumo);

    return 0;
}
