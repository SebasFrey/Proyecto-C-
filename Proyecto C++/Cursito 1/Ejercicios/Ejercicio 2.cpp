// Expresiones

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, resultado = 0;
    cout << "Digite el valor a: ";
    cin >> a;
    cout << "Digite el valor b: ";
    cin >> b;
    cout << "Digite el valor c: ";
    cin >> c;
    cout << "Digite el valor d: ";
    cin >> d;

    resultado = (a + b) / (c + d);
    cout.precision(2); // para que retorne dos decimales depues del punto

    cout << "\nEl resultado es: " << resultado << endl;
}