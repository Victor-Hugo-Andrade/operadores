#include <stdio.h>

int main() {
    int anos, meses, dias;
    printf("Digite a idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    int idadeEmDias = (anos * 365) + (meses * 30) + dias;
    printf("A idade em dias : %d dias\n", idadeEmDias);

    return 0;
}
