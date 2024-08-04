#include "lista.h"
#include <iostream>

Lista::Lista() {
    primero = nullptr;
    cursor = primero;
    cantidad = 0;
    mas_antiguo = 1;
}

Nodo* Lista::obtener_nodo(int pos) {
    Nodo* pn = primero;
    for (int i = 1; i < pos; i++)
        pn = pn->obtener_siguiente();
    return pn;
}

void Lista::alta(Dato d, int pos) {
    Nodo* nuevo = new Nodo(d);
    if (esta_vacia())
        cursor = nuevo;
    if (pos == 1){
        nuevo->cambiar_siguiente(primero);
        primero = nuevo;
    } else {
        Nodo* anterior = obtener_nodo(pos-1);
        Nodo* siguiente = anterior->obtener_siguiente();
        nuevo->cambiar_siguiente(siguiente);
        anterior->cambiar_siguiente(nuevo);
    }
    cantidad++;
}

void Lista::alta(Dato d) {
    Nodo* nuevo = new Nodo(d);
    if (esta_vacia()){
        cursor = nuevo;
        nuevo->cambiar_siguiente(primero);
        primero = nuevo;
        cantidad+=1;
    } else if (obtener_cantidad() < MAXIMO){
        Nodo* anterior = obtener_nodo(obtener_cantidad()); 
        Nodo* siguiente = anterior->obtener_siguiente();  
        nuevo->cambiar_siguiente(siguiente); 
        anterior->cambiar_siguiente(nuevo); 
        cantidad+=1;
    } else if (obtener_cantidad() >= MAXIMO) {
        Nodo* antiguo = obtener_nodo(mas_antiguo); 
        antiguo->cambiar_dato(nuevo->obtener_dato());
        if(mas_antiguo<5){
            cursor = cursor->obtener_siguiente();
            mas_antiguo +=1;
        } else{
            reiniciar_cursor();
            mas_antiguo = 1;
        }
    }     
}

int Lista:: obtener_mas_antiguo(){
    return mas_antiguo; 
}

double Lista:: promedio(){
    double sumatoria = 0;
    for(int i = 1; i <= cantidad; i++){
        sumatoria += consulta(i);
    }
    double resultado = sumatoria / cantidad;
    return resultado;
}

void Lista::baja(int pos) {
    Nodo* borrar = primero;
    if (pos == 1) {
        primero = borrar->obtener_siguiente();
        reiniciar_cursor();
    } else {
        Nodo* anterior = obtener_nodo(pos-1);
        borrar = anterior->obtener_siguiente();
        Nodo* siguiente = borrar->obtener_siguiente();
        anterior->cambiar_siguiente(siguiente);
    }

    if (cursor == borrar)
        siguiente();
    delete borrar;
    cantidad--;
}

Dato Lista::consulta(int pos) {
    Nodo* pn = obtener_nodo(pos);
    return pn->obtener_dato();
}

bool Lista::esta_vacia() {
return (cantidad == 0);
}

int Lista::obtener_cantidad() {
return cantidad;
}

bool Lista::hay_siguiente() {
    return (cursor != nullptr);
}

Dato Lista::siguiente() {
    Dato dato = cursor->obtener_dato();
    cursor = cursor->obtener_siguiente();
    return dato;
}

void Lista::reiniciar_cursor() {
    cursor = primero;
}

Lista::~Lista() {
    while (!esta_vacia())
        baja(1);
}