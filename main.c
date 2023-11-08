#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int vetor[7];
    int i, j, temp;

    // Solicita que o usuário insira os valores no vetor
    printf("Digite os 7 valores:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &vetor[i]);
    }

    // Algoritmo de ordenação (Bubble Sort)
    for (i = 0; i < 7 - 1; i++) {
        for (j = 0; j < 7 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibe o vetor ordenado
    printf("Valores em ordem crescente:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
