#include <iostream>
#include <string>
using namespace std;
struct EMP {
    int num;
    string nom;
    float ven[12], sal;
};
int main (){
    EMP EMPLEADOS[100];
    int n;
    cout<<"ingrese el valor de n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>EMPLEADOS[i].num;
        cin.ignore();
        cout<<"nombre: ";
        getline(cin,EMPLEADOS[i].nom);
        cout<<"ingrese las ventas: ";
        for(int j=0; j<12;j++){
            cout<<" mes "<<j+1<<" : ";
            cin>>EMPLEADOS[i].ven[j];
        }
        cout<<" el salario del empleado: ";
        cin>>EMPLEADOS[i].sal;    
    }

    cout<<"DATOS INGRESADOS"<<endl;
    for (int i=0;i<n;i++){
        cout<<"numero: "<<EMPLEADOS[i].num<<endl;
        cout<<"nombre: "<<EMPLEADOS[i].nom<<endl;
        cout<<"salario: "<<EMPLEADOS[i].sal<<endl;
        cout<<"ventas por mes: ";
        for (int j=0;j<12;j++){
            cout<<EMPLEADOS[i].ven[j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}