#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, j, suma = 0;

    srand(time(NULL));

    printf("Ingrese la longitud de la matriz:\n");
    scanf("%d", &n);

    int A[n][n];
    int B[n][n]; 

    printf("Matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = rand() % (9 + 1 - 1) + 1;
            printf("%d ", A[i][j]);

            if (i == j)
                suma += A[i][j];
        }
        printf("\n");
    }

   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            B[i][j] = A[j][i];
        }
    }

    printf("\nMatriz Transpuesta B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("La suma de la diagonal principal de A es: %d", suma);

    return 0;
}

