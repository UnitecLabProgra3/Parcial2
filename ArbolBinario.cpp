#include "ArbolBinario.h"

ArbolBinario::ArbolBinario()
{
    NodoArbol* n1 = new NodoArbol(5);
    NodoArbol* n2 = new NodoArbol(-3);
    NodoArbol* n3 = new NodoArbol(6);
    NodoArbol* n4 = new NodoArbol(9);
    NodoArbol* n5 = new NodoArbol(1);

    n1->hijo_izq=n2;
    n1->hijo_der=n3;

//    n2->hijo_izq=n4;
    n2->hijo_der=n5;

    padre=n1;
}

void ArbolBinario::imprimir(NodoArbol* padre)
{
    if(padre==NULL)
        return;

    std::cout<<padre->numero<<std::endl;

    imprimir(padre->hijo_der);
    imprimir(padre->hijo_izq);
}

void ArbolBinario::getSumaPorReferencia(NodoArbol* padre,int*acumulador)
{
    if(padre==NULL)
        return;

    *acumulador+=padre->numero;

    getSumaPorReferencia(padre->hijo_der,acumulador);
    getSumaPorReferencia(padre->hijo_izq,acumulador);
}

int ArbolBinario::getSumaPorValor(NodoArbol* padre)
{
    if(padre==NULL)
        return 0;

    int acumulador=padre->numero;
    acumulador+=getSumaPorValor(padre->hijo_der);
    acumulador+=getSumaPorValor(padre->hijo_izq);

    return acumulador;
}

int ArbolBinario::getMax(NodoArbol* padre)
{
    if(padre==NULL)
        return -99999;

    int max=padre->numero;
    int max_izq=getMax(padre->hijo_der);
    int max_der=getMax(padre->hijo_izq);

    if(max_izq>max)
        max=max_izq;
    if(max_der>max)
        max=max_der;

    return max;
}

int ArbolBinario::getMin(NodoArbol* padre)
{
    if(padre==NULL)
        return 99999;

    int min=padre->numero;
    if(getMin(padre->hijo_der)<min)
        min=getMin(padre->hijo_der);
    if(getMin(padre->hijo_izq)<min)
        min=getMin(padre->hijo_izq);

    return min;
}

ArbolBinario::~ArbolBinario()
{
    //dtor
}
