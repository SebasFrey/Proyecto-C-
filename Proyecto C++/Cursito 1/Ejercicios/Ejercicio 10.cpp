
#include <iostream>
#include <math.h> //libreria matematica

using namespace std;

int main()
{
    float x, y, resultado = 0;

    cout << "Valor de x ";
    cin >> x;
    cout << "Valor de y ";
    cin >> y;

    resultado = (sqrt(x)) / (pow(y, 2) - 1);

    cout << endl;
    cout << "El resultado es: " << resultado << endl;

    return 0;
}
