#include <iostream>
using namespace std;
#include <math.h>
/*
Problema 5. Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use
parámetros por referencia para retornar la cadena. Escriba un programa de prueba.
Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.

=====================================================================

Especificaciones del programa
*********************
Este programa recibe un numero entero maximo de 10 digitos
y returna un arreglo maximo de 10 posiciones

=====================================================================

*/


void int_arreglo(signed int,char *,int);
void impresion(char *, int);
int main()
{
    signed int numero=-1;
    char arreglo[11]={};
    //contar cuantos digitos tiene el numero
    //*****************************
    int contador=0,aux;
    if(numero<0){
        aux= -1*numero;
    }
    else{
        aux= numero;
    }

    for(contador=0;aux>0;contador++){
        aux=aux/10;
    }
    //*****************************
    int_arreglo(numero,arreglo,contador);
    impresion(arreglo,11);

    return 0;
}
void int_arreglo(signed int numero,char *arreglo,int contador){
    int Diez=1;
    unsigned int aux=0;
    unsigned int n=0;

    bool signo=true;

    if(numero<0){
        signo=false;
        n= -1*numero;
    }
    else{
        n= numero;
    }

    for (int i=0;n>0;i++) {

        if(signo==false){
           *(arreglo+i)='-';
           signo=true;
        }
        else{
         Diez=pow(10,contador-1);
         aux=n%Diez;
         n=n/Diez;
         *(arreglo+i)=n+48;//ascii
         n=aux;
         contador--;
        }
    }
}

void impresion(char *p_arreglo, int tama){
    for (int i =0;i<tama;i++) {
        cout << p_arreglo[i] << " ";
    }
    cout << endl << endl;
}
