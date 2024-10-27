#include <iostream>
using namespace std;
int main()
{

    int x, y, aux;

    cout << "Digite el valor de x: ";
    cin >> x;

    cout
        << "Digite el valor de y: ";
    cin >> y;

    aux = x;
    x = y;
    y = aux;

    cout << "El intercambio de x es: " << x << endl;
    cout << "El intercambio de y es: " << y << endl;

    cout.precision(2);
    return 0;
}



