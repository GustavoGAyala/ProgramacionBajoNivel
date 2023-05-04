//
// Created by guaya on 01/05/2023.
//
/*
 * Lista Enlazada
 * */

#include <stadio.h>
#include <stdlib.h>
/*IMPLEMENTACION DE UN NODO Y SU SIGUIENTE*/
typedef struct Nodo{
    int valor;
    struct Nodo *sig;

}Nodo;

/*El primer elemento, el último elemento, el número de elementos.
 * Para ello será utilizado otra estructura "Lista"
*/
        typedef struct ListaIdentificar {

            Nodo *inicio;

            Nodo *fin;

            int tamaño;

        }Lista;

  /*El puntero inicio contendrá la dirección del primer elemento de la lista.
   * El puntero fin contendrá la dirección del último elemento de la lista.
   * La variable tamaño contiene el número de elementos. Cualquiera que sea la posición en la lista,
   * los punteros inicio y fin apuntan siempre al primer y último elemento.
   * El campo tamaño contendrá el numero de elementos de la lista cualquiera
   * que sea la operación efectuada sobre la lista.
   */
/*
 * Esta operación debe ser hecha antes de cualquier otra operación sobre la lista.
 * Esta inicializa el puntero inicio y el puntero fin con el puntero NULL, y el tamaño con el valor 0.
*/
void inicializacion (Lista *lista){

    lista->inicio = NULL;

    lista->fin = NULL;

    tamaño = 0;

}



int main(){
    //reservar espacio para los nodos
    Nodo *cabeza = (Nodo*)malloc(sizeof (Nodo));
    Nodo *nodoA = (Nodo*)malloc(sizeof (Nodo));
    Nodo *nodoB = (Nodo*)malloc(sizeof (Nodo));
    Nodo *nodoC = (Nodo*)malloc(sizeof (Nodo));
    //asigacion de valores a los nodos
    cabeza->sig = nodoA;
    cabeza->valor = 10;
    nodoA->sig = nodoB;
    nodoA->valor = 15;
    nodoB->sig = nodoC;
    nodoB->valor = 20;
    nodoC->sig = NULL;
    nodoC->valor = 25;
    //imprimir los valores de la lista enlazada
    Nodo *actual = cabeza;
    while(actual!=NULL){
        printf("valor %d", actual->valor);
        actual = actual->sig;
    }

    return 0;
}