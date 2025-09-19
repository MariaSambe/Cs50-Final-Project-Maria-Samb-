#include <stdio.h>

int main() {
    int meta, passos;
    printf("Defina a meta de passos: ");
    scanf("%d", &meta);

    printf("Passos dados hoje: ");
    scanf("%d", &passos);

    printf("Progresso: %.2f%%\n", (passos * 100.0) / meta);

    if(passos >= meta)
        printf("Parabéns! Atingiu a meta.\n");
    else
        printf("Continue a caminhar!\n");

    return 0;
}
