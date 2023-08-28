#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarroVendido;
    
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    float salarioFinal = salarioFixo + (carrosVendidos * valorPorCarroVendido) + (0.05 * valorTotalVendas);

    printf("O salario final do vendedor : %.2f\n", salarioFinal);

    return 0;
}
