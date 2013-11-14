#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"

using namespace std;

class Lista
{
    public:
        Nodo*inicio;
        Lista();
        void agregarNodo(Nodo*nodo);
        void agregarNodo(Nodo*nodo,int pos);
        void imprimirLista();
        ~Lista();
    protected:
    private:
};

#endif // LISTA_H
