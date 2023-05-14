//
// Created by guaya on 01/05/2023.
//
/*
 * Lista Enlazada
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/*IMPLEMENTACION DE UN NODO (Persona/Cliente) Y SU SIGUIENTE*/
typedef struct Persona{
    char name;
    int edad;
    struct Persona *sig;
}Persona;
/*Creacion  de un Nodo (persona/cliente)*/
Persona *crearPersona(char nombre, int edad){
    Persona *aux;
    aux = malloc(sizeof(Persona));
    aux->edad = edad;
    aux->name = scanf((const char *) nombre);
    /*aux->name = *gets(nombre);*/
    aux->sig = NULL;
    return aux;
}
void agregarNodoALista (Persona **lista, Persona *nuevaPersona) {
    if(nuevaPersona == NULL) {
        *lista = nuevaPersona;
    }
    else {
        nuevaPersona->sig = *lista;
        *lista = nuevaPersona;
    }
}
void eliminarElemntoDeLaLista(Persona **lista, Persona *quienElimina){
    if(*lista.)
}
void imprimirLista (Persona **lista) {
    //imprimir los valores de la lista enlazada
    Persona *actual = *lista;
    while (actual != NULL) {
        printf("nombre: %s Edad: %d", actual->name,actual->edad);
        actual = actual->sig;
    }
}
int main(){

    Persona *pVoid;
    pVoid = malloc(sizeof (Persona));
    pVoid = crearPersona((char) "listaDePersonas", 01);
    Persona *pPersona;
    pPersona = malloc(sizeof (Persona));
    pPersona = crearPersona((char) "Gustavo", 37);
    agregarNodoALista(pVoid, pPersona);
    imprimirLista(pVoid);
    return 0;
}
