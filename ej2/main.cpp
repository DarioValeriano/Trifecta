#include <iostream>
#include "lista.h"

using namespace std;

int main() {
    Lista l1;
    l1.alta(1);
    l1.alta(2);
    l1.alta(3);
    l1.alta(4);
    l1.alta(5);
    l1.alta(6);
    l1.alta(7);
    l1.alta(8);
    l1.alta(9);
    l1.alta(10);
    l1.alta(11);
    l1.alta(12);
    l1.alta(13);
    for (int i = 1; i <= 5; i++)
    {
        cout << l1.consulta(i) << " " << endl;
    }
    cout << "promedio: " << l1.promedio() << endl;;
    return 0;
}