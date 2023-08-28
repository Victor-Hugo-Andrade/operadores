#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste;
    printf("Digite o salario mensal atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    float novoSalario = salarioAtual + (salarioAtual * (percentualReajuste / 100));
    printf("O novo salario : %.2f\n", novoSalario);

    return 0;
}
