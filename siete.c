#include <stdio.h>
int main() {
    int opcion;
    do {
        printf("Menú \n");
        printf("1. Opción 1 \n");
        printf("2. Opción 2 \n");
        printf("3. Opción 3 \n");
        printf("4. Salir \n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Ingresó a la opción 1 \n");
                break;

            case 2:
                printf("Ingresó a la opción 2 \n");
                break;
            case 3:
                printf("Ingresó a la opción 3 \n");
                break;
            case 4:
                break;
            default:
                printf("Opción no encontrada \n");
        }
    } while (opcion != 4);
    return 0;
}
