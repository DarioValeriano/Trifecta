#ifndef _NODO_H_
#define _NODO_H_

typedef int Dato;

class Nodo {
private:
    
    // ATRIBUTOS
    Dato dato;
    Nodo* siguiente;

public:
    
    // CONSTRUCTORES

    // pos: construye un Nodo con un dato d y siguiente en nullptr.
    Nodo(Dato d);
    // pos: construye un Nodo con un dato d y siguiente en pn
    Nodo(Dato d, Nodo* pn);

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

#endif // _NODO_H_