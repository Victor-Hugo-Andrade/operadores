#include <stdio.h>

int main() {
    float comprimento, largura;
    printf("Digite o comprimento e a largura da sala: ");
    scanf("%f %f", &comprimento, &largura);

    float area = comprimento * largura;
    printf("Area da sala: %.2f metros quadrados\n", area);

    return 0;
}
