#include <iostream>

using namespace std;

void Maximo(int a, int b);

int main()
{
    int N1, N2;
    cout << "Introduzca el valor del primer numero: ";
    cin >> N1;
    cout << "Introduzca el valor del segundo numero: ";
    cin >> N2;
    Maximo(N1,N2);
    return 0;
}

void Maximo(int a, int b){
    if (a>b){
        cout << a << " es mayor que " << b << endl;
    }
    else if (a<b){
        cout << b << " es mayor que " << a << endl;
    }
    else{
        cout << "Error" << endl;
    }
}
