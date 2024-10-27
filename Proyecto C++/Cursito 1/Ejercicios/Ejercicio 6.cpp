#include <iostream>
using namespace std;
int main()
{

    float n1, n2, n3, n4, nf;

    cout << "Digite la primera nota ";
    cin >> n1;
    cout << "Digite la segunda nota ";
    cin >> n2;
    cout << "Digite la tercera nota ";
    cin >> n3;
    cout << "Digite la cuarta nota ";
    cin >> n4;

    nf = (n1 + n2 + n3 + n4 / 4);

    cout << "La nota final es: " << nf << endl;
    cout.precision(2);
    return 0;
}