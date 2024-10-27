#include <iostream>
#include <string>

using namespace std;

int main()
{
    int saldo_inicial = 1000, opc;
    float extra, saldo = 0, retiro;

    cout << "\tBienvenido a su cajero virtual " << endl;
    cout << "1. Ingrese dinero en la cuenta " << endl;
    cout << "2. Retirar dinero de la cuenta " << endl;
    cout << "3. Salir " << endl;
    cout << "Opcion: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "Digite una cantidad de dinero a ingresar: ";
        cin >> extra; // Se mueve esta línea para que lea el valor de 'extra'
        saldo = saldo_inicial + extra;
        cout << "Dinero en cuenta: " << saldo;
        break;




    case 2:
        cout << "Digite una cantidad de dinero a retirar: ";
        cin >> retiro; // Se mueve esta línea para que lea el valor de 'retiro'
        if (retiro > saldo_inicial)
        {
            cout << "No tienes esa cantidad de dinero" << endl;
        }
        else
        {
            saldo = saldo_inicial - retiro;
            cout << "Dinero en cuenta: " << saldo;
        }
        break;

    case 3:
        cout << "Gracias por utilizar nuestros servicios." << endl;
        break;

    default:
        cout << "Opción no válida." << endl;
        break;
    }

    return 0;
}
