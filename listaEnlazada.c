//
// Created by guaya on 01/05/2023.
//
/*
 * Lista Enlazada
 * */

#include <stadio.h>
#include <stdlib.h>

typedef struct Nodo{
    int valor;
    struct Nodo *sig;

}Nodo;

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