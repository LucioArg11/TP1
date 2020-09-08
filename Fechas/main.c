#include"Fechas.h"

int main()
{
    tFecha fecha,fecha2;
    int nro;

    fecha.dia=11;
    fecha.mes=6;
    fecha.anio=1999;
    fecha2.dia=10;
    fecha2.mes=6;
    fecha2.anio=1993;
    nro=diferenciaFechas(&fecha,&fecha2);
    printf("%d/%d/%d",fecha.dia,fecha.mes,fecha.anio);
    printf("\n%d",nro);
    return 0;
}
