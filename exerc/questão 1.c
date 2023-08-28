#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Soma: %.2f\n", num1 + num2);
    printf("Subtra: %.2f\n", num1 - num2);
    printf("Multipli: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Divisao: %.2f\n", num1 / num2);
    } else {
        printf("Divisao por zero não a permitida.\n");
    }

    return 0;
}
