#include <stdio.h>

int main() {
    float entrada, saida, saldo = 0;
    int n, i;

    printf("Quantos movimentos quer registar? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Valor de entrada (+) ou saída (-): ");
        scanf("%f", &entrada);
        saldo += entrada;
    }

    printf("Saldo final: %.2f\n", saldo);

    if(saldo < 0)
        printf("Atenção: saldo negativo!\n");
    else
        printf("Boa gestão financeira.\n");

    return 0;
}
