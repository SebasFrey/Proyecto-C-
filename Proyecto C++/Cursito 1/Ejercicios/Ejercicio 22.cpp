#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Arreglo de nombres de meses
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                      "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    int numeroMes;

    // Solicitar al usuario un número entre 1 y 12
    cout << "Ingrese un número entre 1 y 12: ";
    cin >> numeroMes;

    // Validar que el número esté dentro del rango
    if (numeroMes >= 1 && numeroMes <= 12)
    {
        // Mostrar el mes correspondiente
        cout << "El mes correspondiente al número " << numeroMes << " es: " << meses[numeroMes - 1] << endl;
    }
    else
    {
        // Si el número no está en el rango válido
        cout << "Número fuera de rango. Debe ser un número entre 1 y 12." << endl;
    }

    return 0;
}
