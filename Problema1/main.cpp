#include <iostream>

using namespace std;

/*Problema 1. Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para
una cantidad de dinero determinada. Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000
y $1.000, y las monedas son de $500, $200, $100 y $50. Hacer un programa que entregue el número de billetes
y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas
disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Use arreglos
y ciclos para realizar el programa.
Ejemplo: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10



=====================================================================

Especificaciones del programa
*********************
Este programa recibe solo numeros naturales de máximo de 10 digitos


=====================================================================
*/



int main()
{
    int dinero[10]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    /*numero es el valor ingresado por el usuario, contador sera un contador
     que se movera por el arreglo, valor de billetes que se
     va a imprimir y f sera lo faltante.*/

    int numero, valor, faltante=0, resto;
    cout << "Ingrese un valor: ";
    cin>>numero;
    cout << endl;
    resto=numero;

    for (int i=0; i<=9; i++){
        valor=numero/dinero[i];//se saca cuantos billetes o monedas se le pueda contar.
        numero=numero%dinero[i];//Le resta a valor, lo sobrante
        cout << dinero[i]<<":"<<valor<<endl;
        faltante=faltante+(valor*dinero[i]);
    }

    resto=resto-faltante;//con d se saca lo faltante.
    cout <<"Faltante"<<":"<<resto<<"\n\n";

    return 0;
}
