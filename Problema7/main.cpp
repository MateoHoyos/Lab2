#include <iostream>
using namespace std;

/*
Problema 7. Escriba un programa que reciba una cadena de caracteres y elimine los caracteres repetidos.
Ejemplo: se recibe bananas debe mostrar bans.
Nota: la salida del programa debe ser: Original: bananas. Sin repetidos: bans.
*/
void borrar(char *,int);
bool buscar(char *,char , int );
int main()
{
    //***************************
    int numero=10;
    char arreglo[10];
    cout<<"palabra: ";
    cin >>arreglo;
    //***************************
    cout<<"Original: "<<arreglo<<". ";
    borrar(arreglo,numero);

    return 0;
}

void borrar(char *cadena,int tama){
    char ascii='a';
    //int asci=0;
    bool bandera=false;
    char aux[10]={'\n','\n','\n','\n','\n','\n','\n','\n','\n','\n'};

    for (int i =0,j=0;i<tama;i++) {
        //asci=cadena[i];
        //if((asci>=97&&asci<=122)||(asci>65&&asci<=90)){
            ascii=cadena[i];
            bandera=buscar(aux,ascii,tama);
            if(bandera==false){
                aux[j]=ascii;
                j++;
            }
        //}
    }
    cout<<"Sin repetidos: "<<aux<<endl;   
}

bool buscar(char p_letras[],char letra, int tamano){
    for (int i =0;i<tamano;i++) {
        if(letra==p_letras[i]){
            return true;
        }
    }
    return false;
}

