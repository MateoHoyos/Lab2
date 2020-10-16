#include <iostream>
using namespace std;

/*
Problema 10. Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo
usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente arábigo:
M: 1000
D: 500
C: 100
L: 50
X: 10
V: 5
I: 1
Los números romanos se forman usando estos caracteres en base a dos reglas:
Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.

Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
Nota: la salida del programa debe ser:
El número ingresado fue: DCLXVI
Que corresponde a: 666.

=====================================================================

Especificaciones del programa
*********************
Este programa recibe
una cadena de caracteres de letras mayuscula de 10 posiciones maximo


=====================================================================

*/

int romano_valor(char);

int main()
{
    char romano[11];
    int suma=0;

    cout << "ingrese en mayuscula el numero romano: ";
    cin >>romano;


    for (int i=0;i<11;i++) {

        int valor1 = romano_valor(romano[i]);
        int valor2 = romano_valor(romano[i+1]);

        if(valor1 >= valor2)
        {
            suma += valor1;
        }

        if(valor1 < valor2){

            suma -= valor1;
        }
    }

    cout << "El numero ingresado fue: " << romano << endl;
    cout << "Que corresponde a: " << suma << endl<<endl;

    return 0;
}

int romano_valor(char letra)
{
    switch (letra) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
    }

    return 0;
}
