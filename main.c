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

void selection_sort(int arr[], int n) {
    int i, j, menor_idx, temp;

    for (i = 0; i < n - 1; i++) {
        menor_idx = i;

        // Encontra o índice do menor elemento no restante do array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[menor_idx]) {
                menor_idx = j;
            }
        }

        // Troca o menor elemento encontrado com o primeiro da parte não ordenada
        if (menor_idx != i) {
            temp = arr[i];
            arr[i] = arr[menor_idx];
            arr[menor_idx] = temp;
        }
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