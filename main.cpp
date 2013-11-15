#include <vector>
#include "Nodo.h"
#include "Lista.h"
#include "ArbolBinario.h"
#include <iostream>
#include <fstream>
using namespace std;

//bool encontrada=false;
//
//bool puedoLLegar(char tablero[5][5],int x_actual, int y_actual,int pasos)
//{
//    //Casos base
//    if(pasos<0)
//        return false;
//
//    if(x_actual>=5
//       || y_actual>=5
//       || x_actual<0
//       || y_actual<0)
//       return false;
//
//    if(tablero[y_actual][x_actual]=='L')
//        encontrada=true;
//
//    if(tablero[y_actual][x_actual]=='#')
//       return false;
//
//    if(tablero[y_actual][x_actual]=='S' && encontrada)
//       return true;
//
//    pasos--;
//
//    return puedoLLegar(tablero,x_actual+1,y_actual,pasos)
//            || puedoLLegar(tablero,x_actual-1,y_actual,pasos)
//            || puedoLLegar(tablero,x_actual,y_actual+1,pasos)
//            || puedoLLegar(tablero,x_actual,y_actual-1,pasos);
//}



void agregarScore(string nombre,int puntos)
{
    ofstream out("ejemplo.txt",ios::app);
    out<<nombre<<' '<<puntos<<endl;
}

int main()
{
    ArbolBinario arbol;
    int*suma=new int;
    *suma=0;
    arbol.getSumaPorReferencia(arbol.padre,suma);
    cout<<*suma<<endl;

    cout<<arbol.getSumaPorValor(arbol.padre);


//    agregarScore("Chuy",2500);
//    agregarScore("Testa",140);
//    agregarScore("Test",500);
//    agregarScore("Maria",100);
//
//    ifstream in("ejemplo.txt");
//
//    int max=-99999;
//    string nombre_max="";
//
//    while(!in.eof())
//    {
//        string nombre;
//        int puntos;
//        in>>nombre;
//        in>>puntos;
//        if(max<puntos)
//        {
//            max=puntos;
//            nombre_max=nombre;
//        }
//    }
//
//    cout<<"Ganador: "<<nombre_max<<endl;


//    char tablero[5][5]={{' ','#',' ',' ',' '},
//                        {'E','#',' ','#','S'},
//                        {' ','#',' ','#',' '},
//                        {' ','#',' ','#','#'},
//                        {' ',' ',' ',' ','L'}};
//
//    cout<<puedoLLegar(tablero,0,1,12);



//    for(int i=0;i<5;i++)
//    {
//        for(int j=0;j<5;j++)
//        {
//            cout<<tablero[i][j];
//        }
//        cout<<endl;
//    }
//
//    return false;


//    ArbolBinario arbol;
//    arbol.imprimir(arbol.padre);

////  Listas enlazadas
//    Lista lista;
//    lista.agregarNodo(new Nodo(100));
//    lista.agregarNodo(new Nodo(300));
//    lista.agregarNodo(new Nodo(400));
//
//    lista.agregarNodo(new Nodo(200),0);
//
//    lista.imprimirLista();
    return 0;
}
