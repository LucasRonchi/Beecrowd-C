#include <stdio.h>


int main() {
    int code, quantity;
    double total = 0;

    scanf("%d %d", &code, &quantity);

    switch (code) {
        case (1):
            total = 4.00 * quantity;
            break;
        case (2):
            total = 4.50 * quantity;
            break;
        case (3):
            total = 5.00 * quantity;
            break;
        case (4):
            total = 2.00 * quantity;
            break;
        case (5):
            total = 1.50 * quantity;
            break;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
