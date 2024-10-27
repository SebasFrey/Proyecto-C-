// Expresiones

#include <iostream>
using namespace std;

int main()
{
    float a, b, resultado = 0;
    cout << "Digite el valor a: ";
    cin >> a;
    cout << "Digite el valor b: ";
    cin >> b;

    resultado = (a / b) + 1;
    cout.precision(2); // para que retorne dos decimales depues del punto

    cout << "\nEl resultado es: " << resultado << endl;
}