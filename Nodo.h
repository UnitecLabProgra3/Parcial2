#ifndef NODO_H
#define NODO_H

#include <iostream>

class Nodo
{
    public:
        int numero;
        Nodo*siguiente;
        Nodo(int numero);
        void setSiguiente(Nodo*siguiente);
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
