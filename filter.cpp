
#include"filter.h"
#include <arduino.h>

int datos[NDatos];

int filtroPasaBajo(int dato)
{
 //Filtro de media movil
 int salida;
 int i;
 for(i=0,datos[i]=dato,salida=0;i<NDatos;i++)
 {
  salida+=datos[i];
 }
 for(i=0;i<(NDatos-1);i++)
 {
  datos[i+1]=datos[i];
 }
 return salida/NDatos;
}
