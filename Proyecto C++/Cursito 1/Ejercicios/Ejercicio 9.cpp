#include <iostream>

using namespace std;
#include <math.h>

int main()
{
    float a, b, c = 0;

    cout << "Digite el valor del a: ";
    cin >> a;
    cout << "Digite el valor del b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << endl;
    cout << "El valor de la hipotenusa es: " << c << endl;

    return 0;
}