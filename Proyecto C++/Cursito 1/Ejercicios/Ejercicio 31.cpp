#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int s = 0, e = 0, n;

    cout << "Digite un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        e = pow(2, i);
        s += e;
    }

    cout << "\nLA suma total es: " << s << endl;

    return 0;
}