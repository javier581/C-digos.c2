#include <stdio.h>

#define SIZE 10  // Tamaño del arreglo

void main() {
    int A[SIZE] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int B[SIZE] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};
    int idx1, idx2,idx3, result;


    // Operación: A[idx1] mod (B[idx2]/2)
    printf("Ingrese los índices para A[x] y B[y] en la operación A[x] mod (B[y]/2): ");
    scanf("%d %d", &idx1, &idx2);
    result = A[idx1] % (B[idx2] / 2);
    printf("Resultado: %d\n", result);

    // Operación: B[A[idx1]] - A[idx2]
    printf("Ingrese el índice para A[1]- A[9]: ");
    scanf("%d %d", &idx1,&idx2 );
        result = A[idx1] - A[idx2];
        printf("Resultado: %d\n", result);

    // Operación: A[0] + A[3]
    printf("Ingrese el índice para A[0]+ A[1]+A[2]: ");
    scanf("%d %d %d", &idx1,&idx2,&idx3);
    result = A[idx1] + A[idx2]+ A[idx3];
    printf("Resultado: %d\n", result);

    // Operación: A[5] + B[5]
    printf("Ingrese el índice para A[5]+ A[5]: ");
    scanf("%d %d", &idx1,&idx2 );
    result = A[idx1] + A[idx2];
    printf("Resultado: %d\n", result);

    // Operación: (A[3] / B[2]) / 2
    if (B[2] != 0) {
        printf("Ingrese el índice para (A[3] / B[2]) / 2: ");
        scanf("%d %d", &idx1,&idx2 );
        result = (A[idx1] / B[idx2]) / 2;
        printf("Resultado: %d\n", result);
    } else {
        printf("Error: División por cero\n");
    }
}