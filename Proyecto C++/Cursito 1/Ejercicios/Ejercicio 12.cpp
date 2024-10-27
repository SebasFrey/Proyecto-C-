#include <iostream>
using namespace std;
int main() {
	int n1,n2,suma=0,resta =0,multiplicacion=0,divicion=0;



	cout<<"Digite un nuemero:";
	cin>>n1;
	cout<<"Digite un nuemero:";
	cin>>n2;
	suma=n1+n2;

	resta = n1-n2;

	multiplicacion=n1*n2;

	divicion=n1/n2;
	cout<<"\nLa suma es:"<<suma<<endl;
	cout<<"\nLa resta es:"<<resta<<endl;
	cout<<"\nLa multiplicacion es:"<<multiplicacion<<endl;
	cout<<"\nLa divicion es:"<<divicion<<endl;

	return 0;
}
