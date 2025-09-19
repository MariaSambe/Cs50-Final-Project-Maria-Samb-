#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;

    printf("Quantos números vai guardar? ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Números guardados: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
