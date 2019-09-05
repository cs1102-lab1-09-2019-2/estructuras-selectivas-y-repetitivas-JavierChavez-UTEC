#include <iostream>
#include <string>

using namespace std;

int main() {
    string numero;
    cin>>numero;
    cout<<"SOAT:";
    if(int(numero[4])%2 == 0)
        cout<<"Vigente";
    else
        cout<<"Vencido";
    cout<<endl<<"CITV:";
    if(int(numero[5])%2 == 0)
        cout<<"Vigente";
    else
        cout<<"Vencido";
    cout<<endl<<"AUTORIZADO:";
    if(int(numero[6] + numero[7])%3 == 0)
        cout<<"Si";
    else
        cout<<"No";
}
