#include "contacto.h"
int main (){
    correo c;
    contactoEmail ce;
    leerCorreo(c,"Rocio.gomez","gmail.com");
    leerContacto(ce,"Rocio gomez",'F',18,c);
    imprimeContacto(ce);
    return 0;
}