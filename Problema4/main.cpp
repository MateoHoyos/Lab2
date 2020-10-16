#include <iostream>
using namespace std;

/*
Problema 4. Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.
Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.

=====================================================================

Especificaciones del programa
*********************
Este programa recibe arreglo maximo de 10 posiciones
y returna un numero maximo de 10 digitos

=====================================================================
*/




int convertir_cadena(char *,int);
int main()
{
    char arreglo[11]={"-030507090"};
    int numero;
    numero=convertir_cadena(arreglo,11);
    cout<<numero<<endl;

    return 0;
}

int convertir_cadena(char *cadena,int longitud)
{
    int aux=0,numero=0;
    bool negativo=false;
    for (int i=0;i<longitud-1;i++) {

        //detectar negativo
        if(cadena[i]=='-'){
            negativo=true;
        }

        else {
            aux=cadena[i]-48;//devuelve el numero ascii del 0 es el 48
            numero = numero*10+aux;
        }

    }

    if(negativo==true) return -numero;

    return numero;
}

