#include <iostream>
using namespace std;

/*
Problema 6. Escriba un programa que reciba una cadena de caracteres y cambie las
letras minúsculas por mayúsculas, los demás caracteres no deben ser alterados.
Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.

=====================================================================

Especificaciones del programa
*********************
Este programa recibe una cadena de caracteres maximo de 10 posiciones


=====================================================================
*/


void impresion(char *p_arreglo, int tama);
int main()
{

    int ascii=0;
    int numero=20;
    char arreglo[10];
    cout<<"Ingrese los caracteres: ";
    cin>>arreglo;

    cout<<'\n'<<"Original: "<<arreglo<<". ";

    for(int i=0;i<numero;i++){
        ascii=arreglo[i];
        if(ascii>=97&&ascii<=122){
            arreglo[i]=ascii-32;//la resta entre ascii la primer letra a=97 y A=65
        }
    }
    cout<<"En mayuscula: "<<arreglo<<"."<<'\n'<<endl;
    return 0;
}

void impresion(char *p_arreglo, int tama){
    for (int i =0;i<tama;i++) {
        cout << p_arreglo[i];
    }
    cout << endl << endl;
}

