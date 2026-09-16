#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, chave, j;

    for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;

        // Move os elementos maiores que 'chave' uma posição à frente
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

void imprimir(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {

    printf("Oi, mundo");

    return 0;
}