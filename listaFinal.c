#include <stdio.h>
#include <stdlib.h>


struct nodo{
    int dato;
    struct nodo *siguiente;
};

struct lista{
    struct nodo *primero;
    struct nodo *ultimo;
};
/*FUNCIONES*/
struct lista *ingresos( struct lista *L );
struct lista *agregar( struct lista *L, int dato );
struct nodo *crear( int dato );
struct lista *eliminar( struct lista *L,int nEliminar);
void ordenar(struct lista *L);
void mostrar(struct lista *L);


int main( void ){
    struct lista *Lista = NULL;

    ingresos( Lista );
    eliminar(Lista, 5);
    ordenar( Lista );
    mostrar( Lista );

    free(Lista);
    return 0;
}
/*Funcion para agregar numeros del 1 - 6*/
struct lista *ingresos( struct lista *L ){
    int i;

    for( i=0; i<7; i++ ){
        printf( "\n %d", i );
        L = agregar( L, i );
    }

    return L;
}

/*Funcion para agregar elementos a lista*/
struct lista *agregar( struct lista *L, int dato ){
    if( L != NULL ){
        struct nodo *e = crear( dato );
        L->ultimo->siguiente = e;
        L->ultimo = e;

        return L;
    }else{
        struct nodo *e = crear( dato );
        struct lista *l = calloc( sizeof( struct lista ), 1 );
        l->primero = e;
        l->ultimo = e;

        return l;
    }
}
/*funcion para crear el dato dentro del NODO*/
struct nodo *crear( int dato ){
    struct nodo *e = calloc( sizeof( struct nodo), 1 );
    e->dato = dato;
    e->siguiente = NULL;

    return e;
}
/*funcion para eliminar elemento*/
struct lista *eliminar(struct lista *L, int nEliminar){
    struct nodo *e = calloc(sizeof(struct nodo),1);
    e = L;
    while( e != NULL){
        if(e->dato == nEliminar){
            e->siguiente = L;
            L = e;

        }
    }

    if( e == NULL ){
        printf("\n");
        printf("Se llego al final de la lista sin resultados");
    }
    return e;
}
/*Ordenamiento de lista*/
void ordenar(struct lista *L){
    struct nodo *pivote = NULL,*actual = NULL;
    int tmp;
    if(L != NULL){
        pivote = L->primero;
        while(pivote != L->ultimo){
            actual = pivote->siguiente;
            while(actual != NULL){
                if(pivote->dato > actual->dato){
                    tmp = pivote->dato;
                    pivote->dato = actual->dato;
                    actual->dato = tmp;
                }
                actual = actual->siguiente;
            }
            pivote = pivote->siguiente;
        }

    }
    else{
        printf(" lista no inicializada o final de la lista");
    }
}
/*funcion para imprimir la lista*/
void mostrar(struct lista *L){
    struct nodo *auxiliar;
    int i=0;
    auxiliar = L->primero;

    printf("\n\n Mostrando lista ordenada:\n");

    while (auxiliar!=NULL) {
        printf( "\n %d", auxiliar->dato);
        auxiliar = auxiliar->siguiente;
        i++;
    }
    if (i==0) printf( "\nLa lista está vacía!!\n" );
}