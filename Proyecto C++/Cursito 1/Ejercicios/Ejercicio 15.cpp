#include <iostream>
using namespace std;
int main()
{

    int n1, n2;

    cout << "Digite dos numero: ";
    cin >> n1 >> n2;

    if (n1 == n2)

    {
        cout << " Ambos numeros son iguales";
    }
    else if (n1 > n2)
    {
        cout << "el mayor es: " << n1;
    }
    else
    {
        cout << "el mayor es: " << n2;
    }

    return 0;
}
