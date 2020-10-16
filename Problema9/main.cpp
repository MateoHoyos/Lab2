#include <iostream>
using namespace std;

/*
Problema 9. Escribir un programa que reciba un número n y lea una cadena de caracteres numéricos, el programa
debe separar la cadena de caracteres en números de n cifras, sumarlos e imprimir el resultado. En caso de no poderse
dividir exactamente en números de n cifras se colocan ceros a la izquierda del primer número.
Ejemplo: Si n=3 y se lee el arreglo 87512395 la suma seria 087+512+395=994.
Nota: la salida del programa debe ser:
Original: 87512395.
Suma: 994.

=====================================================================

Especificaciones del programa
*********************
Este programa recibe solo numeros naturales y
una cadena de caracteres numéricos máximo de longitud 10


=====================================================================

*/

int main()
{
    int n=4;
    char cadena[11]={"103050709"};
    int contador=0,suma=0,numerogenerado=0;
    int potencia10=10;

//    cout<<"Escriba un numero n: ";
//    cin>>n;
//    cout<<"Caracteres numericos ";
//    cin>>cadena;



    //recorre el char de derecha a izquierda
    for(int i=11-1; i>=0 ;i--){

        if(cadena[i]!='\0'){
            //crear numero
            /*
             * ya que se recorre el char del ultimo al primero
             * toca generar el numero por unidades,decenas,centenas, etc
             */
            if(contador==0)
            {
                numerogenerado = numerogenerado*10+(cadena[i]-48);
            }
            else {

                numerogenerado = ((cadena[i]-48)*potencia10)+numerogenerado;
                potencia10 *= 10;
            }

            contador ++;

            if(contador==n)
            {
                contador=0;
                suma += numerogenerado;
                numerogenerado=0;
                potencia10=10;

            }
            if(i==0) { //el ultimo numero generado que sobra se suma
                suma += numerogenerado;
            }


        }
    }
        cout <<"\n" <<"Original: " <<  cadena << "\n";
        cout <<"Suma: " <<  suma << "\n\n";




    return 0;
}
