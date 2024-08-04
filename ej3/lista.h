#ifndef _LISTA_H_
#define _LISTA_H_

#include "nodo.h"

template <typename Dato>

class Lista {
private:
    Nodo<Dato>* primero;
    Nodo<Dato>* cursor;
    int cantidad;

    // pre: 0 < pos <= cantidad
    // pos: devuelve un puntero al nodo en la posicion pos
    Nodo<Dato>* obtener_nodo(int pos);
public:
    // CONSTRUCTOR
    // pre: -
    // pos: construye una Lista
    Lista();

    // METODOS PUBLICOS
    
    // pre: 0 < pos <= obtener_cantidad() + 1
    // pos: agrega d a la Lista en la posicion pos
    void alta(Dato d, int pos);

    // pre: 0 < pos <= obtener_cantidad()
    // pos: elimina de la Lista el elemento en la posicion pos 
    void baja(int pos);

    // pre: -
    // pos: devuelve true si la Lista esta vacia
    // devuelve false en caso contrario
    bool esta_vacia();

    // pre: 0 < pos <= obtener_cantidad()
    // pos: devuelve el elemento de la posicion pos 
    Dato consulta(int pos);

    // pre: -
    // pos: devuelve la cantidad de elementos en la lista
    int obtener_cantidad();

    // pre: -
    // pos: devuelve true si hay siguiente, false si no
    bool hay_siguiente();

    // pre: hay_siguiente() == true
    // pos: devuelve el siguiente dato y actualiza el cursor
    Dato siguiente();

    // pre: -
    // pos: vuelve el cursor al inicio
    void reiniciar_cursor();

    // DESTRUCTOR
    // pre: -
    // pos: destruye la Lista y libera toda la memoria utilizada.
    ~Lista();
};

template <typename Dato>
Lista<Dato>::Lista() {
    primero = nullptr;
    cursor = primero;
    cantidad = 0;
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::obtener_nodo(int pos) {
    Nodo<Dato>* pn = primero;
    for (int i = 1; i < pos; i++)
        pn = pn->obtener_siguiente();
    return pn;
}

template <typename Dato>
void Lista<Dato>::alta(Dato d, int pos) {
    Nodo<Dato>* nuevo = new Nodo<Dato>(d);
    if (esta_vacia())
        cursor = nuevo;
    if (pos == 1){
        nuevo->cambiar_siguiente(primero);
        primero = nuevo;
    } else {
        Nodo<Dato>* anterior = obtener_nodo(pos-1);
        Nodo<Dato>* siguiente = anterior->obtener_siguiente();
        nuevo->cambiar_siguiente(siguiente);
        anterior->cambiar_siguiente(nuevo);
    }
    cantidad++;
}

template <typename Dato>
void Lista<Dato>::baja(int pos) {
    Nodo<Dato>* borrar = primero;
    if (pos == 1) {
        primero = borrar->obtener_siguiente();
        reiniciar_cursor();
    } else {
        Nodo<Dato>* anterior = obtener_nodo(pos-1);
        borrar = anterior->obtener_siguiente();
        Nodo<Dato>* siguiente = borrar->obtener_siguiente();
        anterior->cambiar_siguiente(siguiente);
    }

    if (cursor == borrar)
        siguiente();
    delete borrar;
    cantidad--;
}

template <typename Dato>
Dato Lista<Dato>::consulta(int pos) {
    Nodo<Dato>* pn = obtener_nodo(pos);
    return pn->obtener_dato();
}

template <typename Dato>
bool Lista<Dato>::esta_vacia() {
return (cantidad == 0);
}

template <typename Dato>
int Lista<Dato>::obtener_cantidad() {
return cantidad;
}

template <typename Dato>
bool Lista<Dato>::hay_siguiente() {
    return (cursor != nullptr);
}

template <typename Dato>
Dato Lista<Dato>::siguiente() {
    Dato dato = cursor->obtener_dato();
    cursor = cursor->obtener_siguiente();
    return dato;
}

template <typename Dato>
void Lista<Dato>::reiniciar_cursor() {
    cursor = primero;
}

template <typename Dato>
Lista<Dato>::~Lista() {
    while (!esta_vacia())
        baja(1);
}

#endif // _LISTA_H_