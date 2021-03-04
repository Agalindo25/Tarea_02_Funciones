#include <iostream>

using namespace std;
int Suma(int a,int b);

int main()
{
    int a,b;
    cout << "introduce el primer operando: " ;
    cin >> a;
    cout << "introduce el segundo operando: " ;
    cin >> b;
    cout <<"el resultado de la suma es: " <<Suma(a,b)<<endl;
    return 0;
}

int Suma(int a,int b){
    return a + b;
}
