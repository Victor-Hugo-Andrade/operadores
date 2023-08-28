#include <stdio.h>

int main() {
    float custo, frete, despesas, valorDeVenda;
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);

    printf("Digite o valor do frete: ");
    scanf("%f", &frete);

    printf("Digite as despesas eventuais: ");
    scanf("%f", &despesas);

    printf("Digite o valor de venda: ");
    scanf("%f", &valorDeVenda);

    float lucro = valorDeVenda - (custo + frete + despesas);
    float percentagemLucro = (lucro / custo) * 100;

    printf("O lucro da mercadoria: %.2f\n", lucro);
    printf("A porcentagem de lucro: %.2f%%\n", percentagemLucro);

    return 0;
}
