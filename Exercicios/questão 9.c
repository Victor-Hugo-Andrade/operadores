#include <stdio.h>

int main() {
    float custoDeFabrica, custoFinal;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoDeFabrica);

    float percentualDistribuidor = 0.28;
    float percentualImpostos = 0.45;

    custoFinal = custoDeFabrica + (custoDeFabrica * percentualDistribuidor) + (custoDeFabrica * percentualImpostos);

    printf("O custo final ao consumidor : %.2f\n", custoFinal);

    return 0;
}

