#include <iostream>

using namespace std;

int main()
{

    int numero[100], n;

    cout << "Digite el numero de elemetos que va a tener el arreglo: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Digite un numero: ";
        cin >> numero[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << numero[i]<<endl;
    }
}
