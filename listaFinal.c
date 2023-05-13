#include <stdio.h>
#include <stdlib.h>



typedef struct structNodo {
    char name[30]
    int valor;
    struct structNodo *proximo;
} Nodo;

void agregarElemento(Nodo **lista, int valor) {
    Nodo *nodoNuevo = malloc(sizeof(Nodo));
    nodoNuevo->valor = valor;
    nodoNuevo->proximo = NULL;
    if (*lista == NULL) {
        *lista = nodoNuevo;
    } else {
        Nodo *cursor = *lista;
        while (cursor->proximo != NULL) {
            cursor = cursor->proximo;
        }
        cursor->proximo = nodoNuevo;
    }

}

void ordenarLista(Nodo **lista){
    Nodo *aux = malloc(sizeof(Nodo));
    aux = *lista;
    aux->valor
}
int main() {

    Nodo *lista = NULL;

    lista = agregarElemento(lista, 3);
    lista = agregarElemento(lista, 4);
    lista = agregarElemento(lista, 5);

    printf("%d \n", lista->valor);
    printf("%d \n", lista->proximo->valor);
    printf("%d \n", lista->proximo->proximo->valor);

    return 0;
}