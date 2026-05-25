#include <stdio.h>


int main() {
    int number, hours;
    double value, salary;

    scanf("%d %d %lf", &number, &hours, &value);

    salary = hours * value;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
