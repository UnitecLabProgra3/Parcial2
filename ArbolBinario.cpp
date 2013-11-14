#include "ArbolBinario.h"

ArbolBinario::ArbolBinario()
{
    NodoArbol* n1 = new NodoArbol(1);
    NodoArbol* n2 = new NodoArbol(2);
    NodoArbol* n3 = new NodoArbol(3);
    NodoArbol* n4 = new NodoArbol(4);
    NodoArbol* n5 = new NodoArbol(5);

    n1->hijo_izq=n2;
    n1->hijo_der=n3;

    n2->hijo_izq=n4;
    n2->hijo_der=n5;

    padre=n1;
}

void ArbolBinario::imprimir(NodoArbol* padre)
{
    if(padre==0)
        return;

    std::cout<<padre->numero<<std::endl;

    imprimir(padre->hijo_der);
    imprimir(padre->hijo_izq);
}

ArbolBinario::~ArbolBinario()
{
    //dtor
}
