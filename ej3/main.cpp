#include <iostream>
#include "lista.h"
#include "buscador_carreras.h"
#include "carrera.h"

using namespace std;

int main() {
    Lista<string> materias_c1;
    materias_c1.alta("Matematica", 1);
    materias_c1.alta("Historia", 2);
    materias_c1.alta("Algebra", 3);
    materias_c1.alta("Analisis", 4);
    materias_c1.alta("Mercado", 5);
    materias_c1.alta("Criptomonedas", 6);

    Carrera carrera1("Economia", 6, &materias_c1);

    Lista<string> materias_c2;
    materias_c2.alta("Matematica", 1);
    materias_c2.alta("Criptomonedas", 2);
    materias_c2.alta("Algebra", 3);
    materias_c2.alta("Inversiones", 4);
    materias_c2.alta("Analisis", 5);
    materias_c2.alta("Mercado", 6);

    Carrera carrera2("CienciasEconomicas", 4, &materias_c2);

    Lista<string> materias_c3;
    materias_c3.alta("Algebra", 1);
    materias_c3.alta("Algoritmos", 2);
    materias_c3.alta("Analisis", 3);
    materias_c3.alta("Computador", 4);
    materias_c3.alta("Criptomonedas", 5);
    materias_c3.alta("Diagrama", 6);

    Carrera carrera3("IngenieriaInformatica", 5, &materias_c3);

    Lista<string> materias_c4;
    materias_c4.alta("Partituras", 1);
    materias_c4.alta("Historia", 2);
    materias_c4.alta("MusicaHispana", 3);
    materias_c4.alta("Arte", 4);
    materias_c4.alta("Guitarra", 5);
    materias_c4.alta("Canto", 6);

    Carrera carrera4("Musica", 4, &materias_c4);

    Lista<Carrera*> carreras;
    carreras.alta(&carrera1, 1);
    carreras.alta(&carrera2, 2);
    carreras.alta(&carrera3, 3);
    carreras.alta(&carrera4, 4);

    Lista<string> materias_predilectas1;
    materias_predilectas1.alta("Algebra", 1);
    materias_predilectas1.alta("MusicaHispana", 2);
    materias_predilectas1.alta("Analisis", 3); 
    materias_predilectas1.alta("Historia", 4); 
    materias_predilectas1.alta("Arte", 5); 
    materias_predilectas1.alta("Partituras", 6);
    materias_predilectas1.alta("Criptomonedas", 7);
    materias_predilectas1.alta("Computador", 8);

    Lista<string> materias_predilectas2;
    materias_predilectas2.alta("AlgebraP2", 1);
    materias_predilectas2.alta("MusicaHispana", 2);
    materias_predilectas2.alta("Analisis", 3);
    materias_predilectas2.alta("HistoriaEconomica", 4);
    materias_predilectas2.alta("Arte", 5);
    materias_predilectas2.alta("Mercado", 6);

    Lista<string> materias_predilectas3;
    materias_predilectas3.alta("AlgebraP3", 1);
    materias_predilectas3.alta("MusicaHispana", 2);
    materias_predilectas3.alta("Analisis", 3);
    materias_predilectas3.alta("HistoriaEconomica", 4);
    materias_predilectas3.alta("Arte", 5);
    materias_predilectas3.alta("Mercado", 6);

    
    Buscador_Carreras buscador;
    int duracion_maxima1 = 6;
    Lista<Carrera*>* lista_carreras_sugeridas = buscador.sugerir_carreras(&carreras, duracion_maxima1, &materias_predilectas1);
    cout << "Busqueda" << endl;
    buscador.imprimir_carreras(lista_carreras_sugeridas);

    return 0;
}