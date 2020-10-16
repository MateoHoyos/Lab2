#include <iostream>
using namespace std;
/*
Problema 17. Dos números a y b (a != b) son amigables si la suma de los divisores de a (excluyéndose el mismo)
es igual a b, y viceversa. Ej: los divisores de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110; y suman 284. Los divisores
de 284 son 1, 2, 4, 71 y 142; y suman 220. Entonces 220 y 284 son amigables. Escribir un programa que reciba un
número y halle la suma de todos los números amigables menores al número ingresado.
Nota: la salida del programa debe ser:
El resultado de la suma es: 504.

=====================================================================

Especificaciones del programa
*********************
Este programa recibe un numero natural maximo de 4 digitos


=====================================================================

*/
int suma_divisores(int numero);
bool buscar_arreglo(int *puntero,int numero,int bus_numero);

int main()
{
    int numero=0;
    int n_amigables[10]={0};
    int pos=0;
    int suma1=0;
    int suma2=0;
    int suma_n_amigables=0;
    bool valor=false;
    cout << "Ingrese un numero natural: "; cin>>numero;

    for (int i=1;i<numero;i++) {
        suma1 = suma_divisores(i);//obtener numero a

        //buscar en el arreglo para no repetir la suma
        valor = buscar_arreglo(n_amigables,10,suma1);

        // evitar que a y b sean iguales y que sea menor al numero ingresado
        if(i!=suma1 && suma1<numero && valor == false)
        {
            suma2 = suma_divisores(suma1);//obtener numero b
            if(i==suma2)
            {
                suma_n_amigables= suma_n_amigables + suma1 + suma2;
                //guardar la pareja de numeros
                n_amigables[pos]=suma1;
                pos ++;
                n_amigables[pos]=suma2;
                pos ++;
            }
        }

        valor = false;

    }
    //cout<<"\0"<<*(n_amigables+9)<<endl;
    cout<<"El resultado de la suma es: "<<suma_n_amigables<<"\n\n";

    return 0;
}

bool buscar_arreglo(int *puntero,int numero,int bus_numero)
{

    for (int i=0;i<numero;i++) {
            if(puntero[i]==bus_numero)
            {
                return true;
            }
    }
   return false;
}


//suma de divisores propios excluyendose el mismo
int suma_divisores(int numero)
{
    int suma=0;
    for (int i=1;i<numero;i++)
    {
        if(numero%i==0)
        {
            suma += i;
        }
    }

    return suma;
}

