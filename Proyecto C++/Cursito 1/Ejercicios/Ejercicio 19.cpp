#include <iostream>
using namespace std;
int main()
{

    int edad;

    cout << "digite su edad: ";
    cin >> edad;

    if ((edad >= 18) && (edad <= 25))
    {
        cout << "su edad esta en el rango de 18 a 25 ";
    }
    else
    {
        cout << "su edad no se emcuentra en el rango de esad ";
    }

    return 0;
}