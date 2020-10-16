#include <iostream>
#include <algorithm>    // next_permutation

/*
Problema 18. Las permutaciones lexicográficas son permutaciones ordenadas numérica o alfabéticamente, por
ejemplo las permutaciones lexicográficas de 0,1 y 2 son: 012, 021, 102, 120, 201, 210. Escribir un programa que
reciba un número n y halle la enésima permutación lexicográfica de los números entre 0 y 9.
Ejemplo: para n= 1000000, la permutación lexicográfica es 2783915460.
Nota: la salida del programa debe ser:
La permutacion numero 1000000 es: 2783915460.

*/


using namespace std;

int main()
{
    int myints[] = {0,1,2,3,4,5,6,7,8,9};

    int numero;
    cout << "Ingrese un numero: ";
    cin >>numero;


    /*la funcion next_permutation me hace las permutación lexicográfica en el areglo
     * (modifica el arreglo)
     */

    for (int i=0;i<numero-1;i++) {
        next_permutation(myints,myints+10);
    }

    //impresion
    cout << "La permutacion numero " << numero << " es: ";

    for (int i=0;i<10;i++) {
        cout<<myints[i];
    }

    cout <<"\n\n";


    return 0;
}

