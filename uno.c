#include <stdio.h>
int main() {

    char nom[10];
    int edad;
    printf("Ingrese su nombre y edad: \n");
    scanf("%s %d", nom, &edad);
    printf("Su nombre es: %s \n", nom);
    printf("Su edad es: %d \n", edad);
    return 0;
}
