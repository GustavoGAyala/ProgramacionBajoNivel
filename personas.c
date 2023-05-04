#include <stdio.h>
// #include "suma.h"

typedef struct {
    char *name;
    int age;
} Persona;

/**
 * Coloca el nombre de la persona, recibe un srtuct de tipo Persona y un char para el nombre
*/
Persona colocarNombre(Persona *cliente, char *nuevo_nombre){

    cliente->name = nuevo_nombre;
}

/**
 * Coloca la edad de la Persona, recibe un struct de tipo Persona y un entero para la edad
*/
Persona colocarEdad(Persona *persona, int new_age){
    persona->age = new_age;
}

/**
 * Recibe un struc de tipo Persona e imprime la informacion nombre y edad con un salto de linea
*/
Persona imprimirCliente(Persona persona){
    printf("Nombre: %s\nEdad: %d\n",persona.name,persona.age);
}
int main() {
    Persona yo;
    colocarNombre(&yo, "Yamil");
    colocarEdad(&yo, 26);

    Persona cj;
    colocarNombre(&cj, "Carl Johnson");
    colocarEdad(&cj, 29);

    imprimirCliente(yo);
    printf("\n");
    imprimirCliente(cj);
    colocarNombre(&yo,"Gustavo");
    imprimirCliente(yo);
    colocarEdad(&cj,13);
    imprimirCliente(cj);
}
