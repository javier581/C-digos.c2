#include <stdio.h>

int main() {
    int N, suma = 0;
    
    // Pedir al usuario que ingrese el valor de N
    printf("Ingrese un número N: ");
    scanf("%d", &N);
    
    // Calcular la suma de los números desde 1 hasta N
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    
    // Mostrar el resultado
    printf("La suma de los números desde 1 hasta %d es: %d\n", N, suma);
    
    
}