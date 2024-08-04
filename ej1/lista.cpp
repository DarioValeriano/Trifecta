#include "lista.h"
#include <iostream>

Lista::Lista() {
    primero = nullptr;
    cursor = primero;
    cantidad = 0;
}


Lista::Lista(Lista& otraLista){
    primero = nullptr;
    cursor = primero;
    cantidad = 0;
    for (int i = 1; i <= otraLista.obtener_cantidad(); ++i) {
        alta(otraLista.consulta(i), obtener_cantidad() + 1);
    }
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

Lista* Lista:: union_de_listas_desordenadas(Lista lista_a_unir){
    Lista* nueva_lista = new Lista();
    for(int i = 1; i <= obtener_cantidad(); i++){
        nueva_lista->alta(consulta(i), i);
    }
    for(int j = 1; j <= lista_a_unir.obtener_cantidad(); j++){
        nueva_lista->alta(lista_a_unir.consulta(j), nueva_lista->obtener_cantidad()+1);
    }

    return nueva_lista;
}

Lista* Lista:: union_de_listas_ordenadas(Lista lista_a_unir){
    Lista* nueva_lista = new Lista();
    for(int i = 1; i <= obtener_cantidad(); i++){
        nueva_lista->alta(consulta(i), i);
    }
    for(int j = 1; j <= lista_a_unir.obtener_cantidad(); j++){
        bool mayor = true;
        bool no_igual = true;
        int k = 1;
        while(k <= nueva_lista->obtener_cantidad() && mayor){
            if(lista_a_unir.consulta(j) < nueva_lista->consulta(k)){
                nueva_lista->alta(lista_a_unir.consulta(j), k);
                mayor=false;
            } else if(lista_a_unir.consulta(j) == nueva_lista->consulta(k)){
                no_igual = false;
                mayor = false;
            } 
            else {
                k+=1;
            }
        }
        if(mayor && no_igual){
            nueva_lista->alta(lista_a_unir.consulta(j), nueva_lista->obtener_cantidad()+1);
        }
    }
    return nueva_lista;
}

void Lista:: imprimir_lista(){
    for (int i = 1; i <= obtener_cantidad(); i++) {
        std::cout << consulta(i) << " ";
    }
}

Lista::~Lista() {
    while (!esta_vacia())
        baja(1);
}