#include <iostream>

using namespace std;

int main()
{
    int numeros[5] = {1, 2, 3, 4, 5};
    int multiplicacion = 1; // Inicializar en 1 para calcular el producto correctamente

    for (int i = 0; i < 5; i++) // Comenzar el bucle desde 0
    {
        multiplicacion = multiplicacion * numeros[i];
    }
    cout << "El producto de los elementos del vector es: " << multiplicacion << endl;
    return 0;
}
