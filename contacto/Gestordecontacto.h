#ifndef GESTORDECONTACTO_H
#define GESTORDECONTACTO_H
#include "contacto.h"
#include <iostream>
#include <string>
using namespace std;

void mostrarporServidor(contactoEmail lista[], int);
void eliminarContacto(contactoEmail lista[], int);
void BuscarcontactoporEmail(contactoEmail lista[],int);

#endif
