#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
 int dia,
 mes,
 anio;
} tFecha;

int esFechaValida(tFecha *fecha);
tFecha sumaunoFecha(tFecha *fecha);
tFecha sumaNFecha(tFecha *fecha,int n);
tFecha restaNFecha(tFecha *fecha,int n);
int diferenciaFechas(tFecha *fecha,tFecha *fecha2);
#endif // FECHAS_H_INCLUDED
