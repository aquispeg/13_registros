#include <iostream>
using namespace std;
struct correo{
    string user;
    string domain;
};

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};
void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);

int main(){
    int n, op;
    string nom, user, domain, servi;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Modificar un contacto"<<endl;
        cout<<"3. Mostrar la lista de contactos"<<endl;
        cout<<"4. Mostrar un listado de contactos correspondientes a un servidor"<<endl;
        cout<<"5. eliminar contacto"<<endl;
        cout<<"6. buscar un contacto por email"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:
                int poscont;
                cout<<"ingrese el numero de contacto a modificar (1,2,3...):  ";
                cin>>poscont;
                for(int m=0;m<n;m++){
                    if(m==poscont-1){
                        int op2;
                        system("cls");
                        cout<<"1. nombre del contacto: "<<endl; 
                        cout<<"2. Ingrese el sexo (M/F): "<<endl; 
                        cout<<"3. Ingrese la edad: "<<endl; 
                        cout<<"4. Ingrese el correo electronico (usuario@dominio): "<<endl;
                        cout<<"\tIngrese el usuario: "<<endl; 
                        cout<<"\tIngrese el dominio: "<<endl; 
                        cout<<"elige una opcion: "<<endl;
                        cin>>op2;
                        switch(op2){
                        case 1:
                            cin.ignore();
                            cout<<"ingrese el nombre del contacto: "; getline(cin,lista[m].nom);
                        break;
                        case 2:
                            cout<<"ingrese el sexo (M/F): ";cin>>lista[m].sex;
                        break;
                        case 3:
                            cout<<"ingrese la edad: ";cin>>lista[m].edad;
                        break;
                        case 4:
                            cout<<"ingrese el correo electronico (usuario@dominio): "<<endl;
                            cout<<"\tIngrese el usuario: ";cin>>lista[m].email.user;
                            cout<<"\tIngrese el dominio: ";cin>>lista[m].email.domain;
                        break;
                        system("pause");
                        }
                    }
                }
                break;
            case 3:
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i+1<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 4:
                cout<<"ingrese el servidor: ";
                cin>>servi;
                for(int i=0;i<=n;i++){
                    if (servi==lista[i].email.domain){
                        imprimeContacto(lista[i]);
                    }
                }
                system("pause");
                break;
            case 5: 
                cout<<"ingrese el numero de la posicion que quiere eliminar: ";
                cin>>poscont;
                for(int i=poscont-1;i<n;i++){
                    lista[i]=lista[i+1];
                }
                n=n-1;
                system("pause");
                break;
            case 6:
                system("cls"); 
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
                system("pause");
                break;
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";
                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}
void leerContacto(contactoEmail &c, string n, char s, int e, correo em){
    c.nom = n;
    c.sex = s;
    c.edad = e;
    c.email = em;
}
void leerCorreo(correo &c, string u, string d){
    c.user = u;
    c.domain = d;
}
void imprimeContacto(contactoEmail &c){
    cout<<"Nombre: "<<c.nom<<endl;
    cout<<"Sexo: "<<c.sex<<endl;
    cout<<"Edad: "<<c.edad<<endl;
    cout<<"Email: "<<c.email.user<<"@"<<c.email.domain<<endl;
}
