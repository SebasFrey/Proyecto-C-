#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    float x1 = 0;
    float x2 = 0;

    cout << "Dame el valor de a: ";
    cin >> a;
    cout << "Dame el valor de b: ";
    cin >> b;
    cout << "Dame el valor de c: ";
    cin >> c;

    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << endl;
    cout << "El valor de x(+) es: " << x1 << endl;
    cout << "El valor de x(-) es: " << x2 << endl;

    return 0;
}