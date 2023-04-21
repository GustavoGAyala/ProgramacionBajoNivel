#include <stdio.h>
int main() {
    int numeros[] = {12, 2, -3, 4, 11, 6, 547, 8, 9};
    int min = numeros[0];
    for (int i = 1; i < sizeof(numeros) / sizeof(int); i++) {
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }
    printf("Mínimo: %d", min);
    return 0;
}
