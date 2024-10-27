#include <iostream>

using namespace std;

int main()
{
    float practica, teorica, participacio, notaf = 0;

    cout << "dijite la nota de practica:";
    cin >> practica;
    cout << "dijite la nota de teorica:";
    cin >> teorica;
    cout << "dijite la nota de participacion:";
    cin >> participacio;

    practica *= 0.30;
    teorica *= 0.60;
    participacio *= 0.10;

    notaf = practica + teorica + participacio;

    cout << "la nota final es: " << notaf << endl;

    return 0;
}