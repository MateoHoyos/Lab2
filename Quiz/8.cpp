#include <iostream>
using namespace std;

/*
Problema 8. Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.
Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.
Texto: abcrst. Numero: 54

=====================================================================

Especificaciones del programa
*********************
Este programa recibe una cadena de caracteres máximo de longitud 10


=====================================================================


*/
void borrar(char *, int);
void inicializar(char *cadena,int tama);
int main()
{
    char arreglo[10];
    cout<<"palabra: ";
    cin >>arreglo;
    cout<<'\n'<<"Original:"<<arreglo<<endl;
    borrar(arreglo,10);

    return 0;
}
void borrar(char *cadena,int tama){
    int asci=0;
    char caracteres[tama];
    char numeros[tama];
    inicializar(caracteres,tama);
    inicializar(numeros,tama);
    for (int i =0,j=0,k=0;i<tama;i++) {
        asci=cadena[i];
        //numeros
        if(asci>=48&&asci<=57){
            numeros[k]=cadena[i];
            k++;
        }
        else {
            caracteres[j]=cadena[i];
            j++;
        }


    }
    cout<<"Texto: "<<caracteres<<". Numero:"<<numeros<<endl<<endl;
}

void inicializar(char *cadena,int tama){
    for (int i =0;i<tama;i++) {
        cadena[i]='\0';
    }
}
