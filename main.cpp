// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{
    while(!mi_pila.empty())//Verifica que la pila no ete vacia
    {
        if(mi_pila.top() % 2 == 0) //Devuelve si los elementos de la pila tienen residuo 0 en 2 para asegurar que son pares
        {
            mi_pila.pop(); //Va eliminando los elementos de la pila hasta llegar al ultimo
            return true;
        }
        else
        {
            return false;
        }
      }
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
   for(list<int>:: iterator i = mi_lista.begin(); i != mi_lista.end();i--) //iterator recorre la lista
    {
        if(*i % 2 == 0) //Evalua si el residuo del elemento en dos es o
            return true;
    }

    return false;
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{
     while(!mi_pila.empty()) //Verifica que la pila no este vacia
    {
    if(mi_pila.top()==str) // verifica si existe el elemento
        {
        return true;
        mi_pila.pop();
        }
        return false;
    }
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    for(list<string>:: iterator i = mi_lista.begin(); i != mi_lista.end();i++) //Recorre la lista
    {
        if(*i == str) //Evalua si encuentra el elemento
            return true;
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{
    int aux=0; //Variable auxiliar para sumar los elementos de la pila
     while(!mi_pila.empty()) //Evalua que la pila no este vacia
     {
        aux = aux + mi_pila.top(); //Suma los elementps de la pila
        mi_pila.pop();
     }
    return aux;
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int aux = 0;
   for(list<int>:: iterator i = mi_lista.begin(); i != mi_lista.end();i++) //Recorre la lista con iterador
    {
        aux = aux + *i; //Suma los elementos de la lista
   }
return aux;

}

//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{

    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
