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
    int posmax=0;
    float maxventas=0;
    for(int i=0;i<n;i++){
        float sumaven=0;
        for(int j=0;j<12;j++){
            sumaven=sumaven+EMPLEADOS[i].ven[j];
        }
        if(sumaven > maxventas){
            maxventas=sumaven;
            posmax=i;
        }
    }
    cout<<"EMPLEADO CON MAYORES VENTAS"<<endl;
    cout<<"numero: "<<EMPLEADOS[posmax].num<<endl;
    cout<<"nombre: "<<EMPLEADOS[posmax].nom<<endl;
    cout<<"ventas totales: "<<maxventas<<endl;
    
    return 0;
}