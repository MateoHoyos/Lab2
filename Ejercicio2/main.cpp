#include <iostream>
using namespace std;

void fun_c(double *a, int n, double *promedio, double *suma);


int main()
{
    double array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double promedio, suma;
    double *p_promedio=&promedio;
    double *p_suma=&suma;

    fun_c(array,10,p_promedio,p_suma);

    cout << "la suma es " << suma << endl;
    cout << "el promedio es " << promedio << endl;

}

void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++)
          *suma += (*a + i);

    *promedio = *suma / n;
}
