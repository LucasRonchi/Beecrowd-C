#include <stdio.h>
#include <math.h>


int max(int n1, int n2) {
    int maior = (n1 + n2 + abs(n1 - n2)) / 2;

    return maior;
}


int main() {
    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    maior = max(a, b);
    maior = max(maior, c);

    printf("%d eh o maior\n", maior);

    return 0;
}
