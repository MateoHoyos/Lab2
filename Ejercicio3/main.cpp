#include <iostream>
using namespace std;

/*
b = 0xA12
b+2 = 0x0A1A
*(b+2) = 0x0A1A
*(b+2)+1 = 0x0A1E
*(*(b+2)+1) = 39
b[3][1] = 3
*b++ = error

 */


int main()
{
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};

    //cout << "&b: " << &b<< endl;
    cout << "b: " << b << endl;
    cout << "b+2: " << b+2 << endl;
    cout << "*(b+2): " << *(b+2)  << endl;
    cout << "*(b+2)+1: " <<  *(b+2)+1 << endl;
    cout << "*(*(b+2)+1): "  << *(*(b+2)+1) << endl;
    cout << "b[3][1]: "  << b[3][1] << endl;
    //cout << *b++ << endl;

    return 0;

}

