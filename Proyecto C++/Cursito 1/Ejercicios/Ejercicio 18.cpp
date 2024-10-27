#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Digite el primer numero: ";
    cin >> a;
    cout << "Digite el segundo numero: ";
    cin >> b;
    cout << "Digite el tercer numero: ";
    cin >> c;

    if (a == b == c)
    {
        cout << "Los 3 son iguales.";
    }

    else if (a >= b)
    {
        if (c >= a)
        {
            if (c == a)
            {
                cout << c << "y" << a << "son los mayores.";
            }
            else
            {
                cout << c << "es el mayor.";
            }
        }
        else if (c >= b)
        {
            if (c == b)
            {
                cout << c << "y" << b << "son los mayores.";
            }
            else if (c > b)
            {
                cout << c << "es el mayor.";
            }
            else
            {
                cout << b << "es el mayor. ";
            }
        }
    }

    return 0;
}