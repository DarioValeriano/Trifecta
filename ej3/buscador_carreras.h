#ifndef BUSCADOR_CARRERAS
#define BUSCADOR_CARRERAS

#include "lista.h"
#include "carrera.h"
class Buscador_Carreras {
    private:
        Lista<Carrera*>* carreras;
        int duracion_maxima;
        Lista<string>* materias_predilectas;
        int cantidad_carreras_coincidentes=1;
    public:
        // Constructor
        Buscador_Carreras();
        /*
        Pre: agregar las necesarias
        Post: busca en “carreras” aquellas que tienen tres o más materias de
        la lista “materias_predilectas” y una duración menor o igual que
        duracion_maxima.
        Devuelve un puntero a una lista con las carreras que cumplen con estas
        características.
        */
        Lista<Carrera*>* sugerir_carreras(Lista<Carrera*>* carreras, int duracion_maxima, Lista<string>* materias_predilectas);

        // pre: recibe por parametro un puntero a la lista resultante de la funcion sugerir_carreras
        // pos: muestra por pantalla las carreras
        void imprimir_carreras(Lista<Carrera*>* carreras_sugeridas);
};

#endif // BUSCADOR_CARRERAS