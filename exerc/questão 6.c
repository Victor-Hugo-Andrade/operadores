#include <stdio.h>

int main() {
    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float area = 3.14 * raio * raio;
    printf("A area do circulo: %.2f\n", area);

    return 0;
}
