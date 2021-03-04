#include <iostream>

using namespace std;

int main (){
    int a;
    cout<<"digite el valor que desea:" ;
    cin>>a;
    int fact = factorial(a);
    cout<< "el valor del factorial es:"<<fact<<endl<<endl;
}

void factorial(int a){
    int i;
    int resultado=1;
    for(i=1;i<=a;i++){
        resultado*= i;
        }
    return resultado;
}
