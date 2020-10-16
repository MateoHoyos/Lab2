#include <iostream>
using namespace std;

/*Ejercicio 1.
 * Con ayuda del debugger, examine la representación en memoria del arreglo array y responda las siguientes preguntas
 *
 * Cuál es su dirección en memoria? ¿Cuántos bytes se dedican para almacenar cada elemento de array?
 * La dirreción de memoria del arreglo es 0x28fe98
 * para cada elemento se dedican 4 bytes,
 * como es un array de 10 elementos entonces son 40 bytes en total
 *
 * Cuál es la dirección y el contenido en memoria del elemento array[3] ?
 *la dirreción del elemento array[3] es 0x28fe94 y el contenido es 3 al declararla y es un 6 al finalizar
 *
 * Describa el efecto que tiene la función fun_b, sobre el arreglo array
 *el codigo invierte el array colocando lo que hay en ultima posicion en
 *la primera y asi suceviamente hasta terminar,la funcion fun_b recibe el array y
 * el tamaño que tiene el array y recorre el array y con ayuda de la funcion fun_a
 * intercambia los valores que hay metididos en cada posicion opuesta en el array con punteros

*/

void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);
    for(int i=0;i<10;i++){
        cout<<*(array+i)<<endl;
    }
}

void fun_a(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);
    }
}
