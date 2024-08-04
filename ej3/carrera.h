#ifndef CARRERA
#define CARRERA

#include "lista.h"

class Carrera{
    private:
        string nombre;
        int duracion;
        Lista<string>* materias;

    public:
        /* pos: Crea una Carrera con su nombre, la duración (en años) y una lista
        de materias */
        Carrera (string nombre, int duracion, Lista<string>* materias);

        /*pos: devuelve el nombre de la Carrera */
        string obtener_nombre();

        /*pos: devuelve la duración */
        int obtener_duracion ();

        /*pos: devuelve un puntero a la lista de materias */
        Lista<string>* obtener_materias ();
    

};

#endif // CARRERA