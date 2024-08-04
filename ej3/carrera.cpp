#include "carrera.h"

/*pos: Crea una Carrera con su nombre, la duración (en años) y una lista
de materias */
Carrera::Carrera(string nombre, int duracion, Lista<string>* materias){
    this->nombre = nombre;
    this->duracion = duracion;
    this->materias = materias;
}

/*pos: devuelve el nombre de la Carrera */
string Carrera:: obtener_nombre(){
    return nombre;
}

/*pos: devuelve la duración */
int Carrera:: obtener_duracion (){
    return duracion;
}

/*pos: devuelve un puntero a la lista de materias */
Lista<string>* Carrera:: obtener_materias (){
    return materias;
}