#include <iostream>

using namespace std;

int main()
{
    // Definir un array de números
    int numeros[5] = {1, 2, 3, 4, 5};

    // Mostrar el array en orden inverso
    cout << "El array en orden inverso es: ";
    for (int i = 4; i >= 0; i--) // Empezar desde el último elemento (índice 4) hasta el primero (índice 0)
    {
        cout << numeros[i] << " ";
    }
    cout << endl; // Insertar un salto de línea al final de la salida

    return 0; // Indicar que el programa terminó correctamente
}
