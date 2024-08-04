#include <iostream>
#include "lista.h"

using namespace std;

int main() {
    // Crear la primera lista
    Lista lista1;
    lista1.alta(1, 1);
    lista1.alta(2, 2);
    lista1.alta(4, 3);

    // Crear segunda lista
    Lista lista2;
    lista2.alta(2, 1);
    lista2.alta(3, 2);
    lista2.alta(7, 3);

    // Crear tercer lista
    Lista lista3;
    lista3.alta(3, 1);
    lista3.alta(1, 2);
    lista3.alta(15, 3);

    cout << endl;
    // Unir las dos listas y guardar el resultado en una nueva lista
    Lista* lista_unida_desordenada = lista1.union_de_listas_desordenadas(lista2);
    Lista* lista_unida_ordenada = lista1.union_de_listas_ordenadas(lista3);

    // Imprimir la lista unida
    cout << "Lista unida desordenada:" << endl;
    lista_unida_desordenada->imprimir_lista();
    cout << endl;
    cout << "Lista unida ordenada:" << endl;
    lista_unida_ordenada->imprimir_lista();

    //Liberar la memoria de la lista unida
    delete lista_unida_desordenada;
    delete lista_unida_ordenada;
    

    return 0;
}