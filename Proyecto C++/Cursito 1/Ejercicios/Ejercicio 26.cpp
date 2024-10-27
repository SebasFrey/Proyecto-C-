#include <iostream>

using namespace std;

int main()
{
    int numero;
    int contador = 0;

    cout << "Introduzca números (Si introduce un 0 se termina):" << endl;

    do
    {
        cin >> numero;
        if (numero > 0)
        {
            contador++;
        }
    } while (numero != 0);

    cout << "Número de valores mayores que cero leídos: " << contador << endl;

    return 0;
}
