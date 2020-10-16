#include <iostream>
using namespace std;

/*
punto 2 [1 unidad]
Reciba una cadena de caracteres y separe los números del resto de caracteres, generando
una cadena con solo caracteres y otra con los números que había en la cadena original. A
partir de la cadena de números obtenida, el programa separa en números de 2 cifras, los
suma e imprime el resultado. En caso de no poderse dividir exactamente en números de n
cifras se colocan ceros a la izquierda del primer número.
Indicar los casos para los que su programa funciona y las restricciones del mismo como
comentario de múltiples líneas en el encabezado de sus programas.
Ejemplo:
Si se ingresa AD#543BACD1 se debe imprimir en consola
Original: 5431
Suma: 85



=====================================================================

Especificaciones del programa
*********************
Este programa recibe una cadena de caracteres máximo de longitud 50,
La cadena de caracteres no recibe espacios, solo cadenas juntas.

=====================================================================

*/

//prototipos de función
void leerCadenaCaracteres(char *);
void borrar(char *, int);
void inicializar(char *cadena,int tama);
void suma(char *cadena,int n);

int main()
{
    char a[50] = {0};//cadena a ser llenada con el ingreso del usuario
    //<llamado función>
    leerCadenaCaracteres(a);
    //cout<<a<<endl;

    //**************************************
    borrar(a,50);


    return 0;
}

void leerCadenaCaracteres(char *ptrA){
    //<código de la función>

    cout<<"Escriba el arreglo: ";
    cin >>ptrA;
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
    //cout<<"Original: "<<numeros<<endl<<endl;
    suma(numeros,2);
}

void suma(char *cadena,int n){
    int contador=0,suma=0,numerogenerado=0;
    int potencia10=10;
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

}

void inicializar(char *cadena,int tama){
    for (int i =0;i<tama;i++) {
        cadena[i]='\0';
    }
}

