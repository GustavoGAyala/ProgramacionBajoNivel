//
// Created by guaya on 01/05/2023.
//
/*
 * Lista Enlazada
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*El primer elemento, el último elemento, el número de elementos.
 * Para ello será utilizado otra estructura "Lista"
*//*
typedef struct ListaIdentificar {

    Nodo *inicio;

    Nodo *fin;

    int tamaño;

}Lista;*/

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
*//*
void inicializacion (Lista *lista){

    lista->inicio = NULL;

    lista->fin = NULL;

    tamaño = 0;

}*/

/*
Parte 1:
Hacer la implementación de una lista enlazada.
Debe haber funciones para:
-Crear e inicializar la lista
-Agregar un elemento
-Obtener el largo de la lista
-Obtener un elemento N de la lista
-Eliminar un elemento N de la lista
-Imprimir la lista
*/
/*IMPLEMENTACION DE UN NODO Y SU SIGUIENTE*/
typedef struct Nodo{
    char name;
    int edad;
    struct Nodo *sig;

}Nodo;

/*Creacion  de un Nodo (persona/cliente)*/
Nodo *crearNodo(char nombre,int edad){
    Nodo *aux = (Nodo*) malloc(sizeof(Nodo));
    aux->edad = edad;
    /*aux->name = scanf("%s",nombre);*/
    aux->name = (char) gets((char *) nombre);
    aux->sig = NULL;
    return aux;

}

/*Inicia con un Puntero de tipo Nodo que apunta  NULL, el inicio de la lista queda creada y vacia*/
Nodo *inicializarLista() {
    return NULL;
}

void agregarNodoALista (Nodo **lista, Nodo *nuevo) {
    if(nuevo == NULL) {
        *lista = nuevo;
    }
    else {
        nuevo->sig = *lista;
        *lista = nuevo;
    }

}
void imprimirLista (Nodo **lista) {
    //imprimir los valores de la lista enlazada
    Nodo *actual = *lista;
    while (actual != NULL) {
        printf("nombre: %s Edad: %d", actual->name,actual->edad);
        actual = actual->sig;
    }

}


int main(){
/*
    Lista nuevaLista;
    inicializacion(nuevaLista);

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
    }
*/

    Nodo lista = inicializarLista();
    Nodo *nuevoNodo = crearNodo((char)"Gustavo", (int)37);
    agregarNodoALista(lista,nuevoNodo);
    imprimirLista(lista);
    return 0;
}