#include <iostream>
using namespace std;
int main()
{

    float alum1, alum2, alum3, alum4, nfm = 0;

    cout << "ingrese la nota final del alumno 1: ";
    cin >> alum1;
    cout << "ingrese la nota final del alumno 2: ";
    cin >> alum2;
    cout << "ingrese la nota final del alumno 3: ";
    cin >> alum3;
    cout << "ingrese la nota final del alumno 4: ";
    cin >> alum4;

    nfm = (alum1, alum2, alum3, alum4) / 4;

    cout << "La calificacion media de los alumnos es: " << nfm << endl;

    cout.precision(2);
    return 0;
}