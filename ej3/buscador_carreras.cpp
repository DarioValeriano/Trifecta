#include "buscador_carreras.h"
#include <iostream>

Buscador_Carreras:: Buscador_Carreras(){
    //constructor
}

Lista<Carrera*>* Buscador_Carreras:: sugerir_carreras(Lista<Carrera*>* carreras, int duracion_maxima, Lista<string>* materias_predilectas){
    Lista<Carrera*>* lista_resultante;
    for (int i = 1; i < carreras->obtener_cantidad()+1; i++){
        Carrera* carrera = carreras->consulta(i);
        if(carrera->obtener_duracion() <= duracion_maxima ){
            int contador_materias = 0;
            int j = 1;
            while(contador_materias < 3 && j < carrera->obtener_materias()->obtener_cantidad()+1){
                int k = 1;
                bool encontrado = false;
                while(!encontrado && k < materias_predilectas->obtener_cantidad()+1){
                    if(carrera->obtener_materias()->consulta(j) == materias_predilectas->consulta(k)){
                        contador_materias+=1;
                        encontrado = true;
                    }
                    k+=1;
                }
                if(contador_materias >= 3){
                    lista_resultante->alta(carrera, cantidad_carreras_coincidentes);
                    cantidad_carreras_coincidentes++;
                }
                j+=1;
            }
        }
    }
    return lista_resultante;
    
}

void Buscador_Carreras:: imprimir_carreras(Lista<Carrera*>* carreras_sugeridas){
    for (int i = 1; i <= cantidad_carreras_coincidentes-1; i++){
        cout << "carrera coincidente: " << (*carreras_sugeridas).consulta(i)->obtener_nombre()<< endl;
    }    
}