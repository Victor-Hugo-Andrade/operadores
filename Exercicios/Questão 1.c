#include <stdio.h>

int main() {
    float num1, num2;

    // Solicita que o usuário insira dois números
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    // Realiza cálculos e imprime os resultados
    printf("Soma: %.2f\n", num1 + num2);
    printf("Subtr: %.2f\n", num1 - num2);
    printf("Multipli: %.2f\n", num1 * num2);

    // Verifica se num2 é zero antes de realizar a divisão
    if (num2 != 0) {
        printf("Divisao: %.2f\n", num1 / num2);
    } else {
        printf("Divisao por zero nao e permitida.\n");
    }

    return 0;
}
