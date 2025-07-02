#include "Gestordecontacto.h"
#include <iostream>
#include <string>
using namespace std;

void mostrarporServidor(contactoEmail lista[], int n){
    string servi;
    cout<<"ingrese el servidor: ";
    cin>>servi;
    for(int i=0;i<=n;i++){
        if (servi==lista[i].email.domain){
            imprimeContacto(lista[i]);
            }
    }
}
void eliminarContacto(contactoEmail lista[], int n){
    int poscont;
    cout<<"ingrese el numero de la posicion que quiere eliminar: ";
    cin>>poscont;
    for(int i=poscont-1;i<n;i++){
        lista[i]=lista[i+1];
    }
}
void BuscarcontactoporEmail(contactoEmail lista[],int n){
    string user, domain;
    cout<<"ingrese el correo electronico"<<endl;
    cout<<"ingrese el usuario: ";
    cin>>user;
    cout<<"ingrese el dominio: ";
    cin>>domain;
    for(int i=0;i<n;i++){
    if(user==lista[i].email.user && domain==lista[i].email.domain){
        imprimeContacto(lista[i]);
        }
    }
}