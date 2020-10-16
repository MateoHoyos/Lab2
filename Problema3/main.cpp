#include <iostream>
using namespace std;

/*
Problema 3. Haga una función que compare 2 cadenas de caracteres y retorno un valor lógico verdadero si son
iguales y falso en caso contrario, no olvide también tener en cuenta la longitud de las cadenas.
Escriba un programa de prueba.
 */
bool compara(char *cadena1,char *cadena2,int tam1, int tam2);
int longitud(char *);
int main()
{
    char arreglo1[6]={"Mateo"};
    char arreglo2[6]={"Mato"};


    bool bandera=false;
    bandera=compara(arreglo1,arreglo2,6,6);
    cout<<bandera<<endl;
    return 0;
}

bool compara(char *cadena1,char *cadena2,int tam1, int tam2){
    bool bandera=true;
    if(tam1!=tam2){
        return false;
    }
    for(int i=0;i<tam1;i++){
        if(cadena1[i]!=cadena2[i]){
            return  false;
        }
    }
    return bandera;
}



