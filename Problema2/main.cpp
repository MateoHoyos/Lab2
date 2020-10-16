#include <iostream>
#include<time.h>
#include<stdio.h>
using namespace std;

/*
Problema 2. Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
y luego imprima cuantas veces se repite cada letra en el arreglo.
Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABARSECAAB
A: 4
B: 2
C: 1
Y así sucesivamente.
*/

void generar (char []);
void busqueda (char arreglo[],char letras[]);
bool buscar(char letras[],char letra, int tamano);
int contar(char arreglo[],char letra, int tamano);

int main()
{
    char arreglo[200];
    //char *p_arreglo=arreglo;

    char letras[27];
    //inicializar el arreglo
    for (int i =0;i<27;i++) {
        letras[i]='1';
    }
    //char *p_letras=letras;

    generar(arreglo);
    busqueda(arreglo,letras);
    return 0;
}

void generar (char p_arreglo[]){

    //Generar 200 letras
    srand(time(NULL));

    for(int i = 0; i <= 200; i++){
            char letra = 'A' + rand() % (('Z' - 'A') + 1); // genera letras mayusculas
            p_arreglo[i]=letra;
        }
    //impresion
    for (int i =0;i<200;i++) {
        cout << p_arreglo[i] << " ";
    }

    cout << endl << endl;
}

void busqueda (char arreglo[],char letras[]){
    char letra;
    bool bandera;
    int contador=0;
    for (int i =0,aux=0;i<200;i++) {
        letra=arreglo[i];
        bandera=buscar(letras,letra,27);
        if(bandera==false){
             contador=contar(arreglo,letra,200);
             letras[aux]= letra; // guardar letra
             cout<<*(letras+aux)<<":"<<contador<<endl;
             aux ++;
        }
        contador=0;
        bandera = false;
    }
}

bool buscar(char p_letras[],char letra, int tamano){
    for (int i =0;i<tamano;i++) {
        if(letra==p_letras[i]){
            return true;
        }
    }
    return false;
}

int contar(char arreglo[],char letra, int tamano){
    int contador=0;
    for (int i =0;i<tamano;i++) {
        if(letra==arreglo[i]){
            contador++;
        }
    }
    return contador;
}

