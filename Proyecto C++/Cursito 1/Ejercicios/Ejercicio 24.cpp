#include <iostream>

using namespace std;

int main()
{
    int opc;
    int resultado, numero; // Cambiado a int para números enteros

    cout << "1. Calcular el cubo de un número" << endl;
    cout << "2. Verificar si un número es par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Opción: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "Ingrese un número para calcular su cubo: ";
        cin >> numero;
        resultado = numero * numero * numero; // Calcular el cubo correctamente
        cout << "El cubo de " << numero << " es: " << resultado << endl;
        break;

    case 2:
        cout << "Digite un número para saber si es par o impar: ";
        cin >> numero;
        if (numero % 2 == 0)
        {
            cout << "El número es par." << endl;
        }
        else
        {
            cout << "El número es impar." << endl;
        }
        break;

    case 3:
        cout << "Gracias por utilizar nuestros servicios." << endl;
        break;

    default:
        cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
        break;
    }

    return 0;
}
