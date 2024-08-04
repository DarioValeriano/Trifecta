#ifndef _NODO_H_
#define _NODO_H_
#include <iostream>
using namespace std;

template <typename Dato>

class Nodo {
private:
    
    // ATRIBUTOS
    Dato dato;
    Nodo<Dato>* siguiente;

public:
    
    // CONSTRUCTORES

    // pos: construye un Nodo con un dato d y siguiente en nullptr.
    Nodo<Dato>(Dato d);
    // pos: construye un Nodo con un dato d y siguiente en pn
    Nodo<Dato>(Dato d, Nodo<Dato>* pn);

    // METODOS
    //pos: devuelve el dato
    Dato obtener_dato();
    //pos:devuelve el siguiente
    Nodo* obtener_siguiente();
    //pos: cambia el dato actual por el dato ingresado
    void cambiar_dato(Dato d);
    //pos: cambia el elemento siguiente por el ingresado
    void cambiar_siguiente(Nodo* pn);
};
template<typename Dato>
Nodo<Dato>::Nodo(Dato d) {
    dato = d;
    siguiente = nullptr;
}

template<typename Dato>
Nodo<Dato>::Nodo(Dato d, Nodo<Dato>* pn) {
    dato = d;
    siguiente = pn;
}

template<typename Dato>
Dato Nodo<Dato>::obtener_dato() {
    return dato;
}

template<typename Dato>
Nodo<Dato>* Nodo<Dato>::obtener_siguiente() {
    return siguiente;
}

template<typename Dato>
void Nodo<Dato>::cambiar_dato(Dato d) {
    dato = d;
}

template<typename Dato>
void Nodo<Dato>::cambiar_siguiente(Nodo<Dato>* pn) {
    siguiente = pn;
}

#endif // _NODO_H_