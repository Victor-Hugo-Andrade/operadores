#include <stdio.h>

int main() {
    float valorEmReais, cotacaoDolar;
    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    float valorEmDolares = valorEmReais / cotacaoDolar;
    printf("O valor dolares: %.2f\n", valorEmDolares);

    return 0;
}
