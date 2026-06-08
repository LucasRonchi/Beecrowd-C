#include <stdio.h>


int main() {
    double n1, n2, n3, n4;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    printf("Media: %.1lf\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");

    } else if (media >= 5.0) {
        printf("Aluno em exame.\n");

        double n5;
        scanf("%lf", &n5);
        media = (media + n5) / 2;

        printf("Nota do exame: %.1lf\n", n5);

        if (media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", media);

    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
