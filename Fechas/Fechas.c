#include"Fechas.h"
int esFechaValida(tFecha *fecha)
{
    int dias[2][12]= {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    if(fecha->mes>12 || fecha->mes<1)
        return 0;

    if(fecha->anio%4==0 && (fecha->anio%100!=0 || fecha->anio%400==0))
    {
        if(fecha->dia>dias[1][fecha->mes-1] || fecha->dia<1)
            return 0;
    }
    else if(fecha->dia>dias[0][fecha->mes-1] || fecha->dia<1)
        return 0;

    return 1;
}

tFecha sumaunoFecha(tFecha *fecha)
{
    int dias[2][12]= {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    if(0==esFechaValida(fecha))
        return *fecha;

    if(fecha->anio%4==0 && (fecha->anio%100!=0 || fecha->anio%400==0))
    {
        if(fecha->dia+1>dias[1][fecha->mes-1] && fecha->mes!=12)
        {
            fecha->dia=1;
            fecha->mes++;
            return *fecha;
        }
        if(fecha->dia+1>dias[1][fecha->mes-1] && fecha->mes==12)
        {
            fecha->dia=1;
            fecha->mes=1;
            fecha->anio++;
            return *fecha;
        }
        if(fecha->dia+1<dias[1][fecha->mes-1])
        {
            fecha->dia++;
            return *fecha;
        }
    }else
    {
        if(fecha->dia+1>dias[0][fecha->mes-1] && fecha->mes!=12)
        {
            fecha->dia=1;
            fecha->mes++;
            return *fecha;
        }
        if(fecha->dia+1>dias[0][fecha->mes-1] && fecha->mes==12)
        {
            fecha->dia=1;
            fecha->mes=1;
            fecha->anio++;
            return *fecha;
        }
        if(fecha->dia+1<dias[0][fecha->mes-1])
        {
            fecha->dia++;
            return *fecha;
        }

    }
    return *fecha;
}

tFecha sumaNFecha(tFecha *fecha,int n)
{
    int dias[2][12]= {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    int i=0;

    if(0==esFechaValida(fecha))
        return *fecha;

    while(i<=n)
    {

        if(fecha->anio%4==0 && (fecha->anio%100!=0 || fecha->anio%400==0))
        {
                while(i<n)
                {
                    fecha->dia++;

                    if(fecha->dia>dias[1][fecha->mes-1]&& fecha->mes!=12)
                    {
                        fecha->mes++;
                        fecha->dia=1;
                    }
                    if(fecha->dia>dias[1][fecha->mes-1] && fecha->mes==12)
                    {
                        fecha->mes=1;
                        fecha->dia=1;
                        fecha->anio++;
                        break;
                    }
                    i++;
                }
                i++;
        }else
        {
             while(i<n)
                {
                    fecha->dia++;

                    if(fecha->dia>dias[0][fecha->mes-1]&& fecha->mes!=12)
                    {
                        fecha->mes++;
                        fecha->dia=1;
                    }
                    if(fecha->dia>dias[0][fecha->mes-1] && fecha->mes==12)
                    {
                        fecha->mes=1;
                        fecha->dia=1;
                        fecha->anio++;
                        break;
                    }
                    i++;
                }
                i++;
        }
    }
    return *fecha;
}

tFecha restaNFecha(tFecha *fecha,int n)
{
    int dias[2][12]= {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    int i=0;

    if(0==esFechaValida(fecha))
        return *fecha;

    while(i<=n)
    {

        if(fecha->anio%4==0 && (fecha->anio%100!=0 || fecha->anio%400==0))
        {
                while(i<n)
                {
                    fecha->dia--;

                    if(fecha->dia<1&& fecha->mes!=1)
                    {
                        fecha->mes--;
                        fecha->dia=dias[1][fecha->mes-1];
                    }
                    if(fecha->dia<1 && fecha->mes==1)
                    {
                        fecha->mes=12;
                        fecha->dia=31;
                        fecha->anio--;
                        break;
                    }
                    i++;
                }
                i++;
        }else
        {
               while(i<n)
                {
                    fecha->dia--;

                    if(fecha->dia<1&& fecha->mes!=1)
                    {
                        fecha->mes--;
                        fecha->dia=dias[0][fecha->mes-1];
                    }
                    if(fecha->dia<1 && fecha->mes==1)
                    {
                        fecha->mes=12;
                        fecha->dia=31;
                        fecha->anio--;
                        break;
                    }
                    i++;
                }
                i++;
        }

    }
    return *fecha;
}

int diferenciaFechas(tFecha *fecha,tFecha *fecha2)
{
    int dias[2][12]= {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    int i=0;

    if(0==esFechaValida(fecha))
            return 0;
    if(0==esFechaValida(fecha2))
            return 0;


    while(fecha->dia!=fecha2->dia || fecha->mes!=fecha2->mes || fecha->anio!=fecha2->anio)
    {

        if(fecha->anio%4==0 && (fecha->anio%100!=0 || fecha->anio%400==0))
        {
                while(fecha->dia!=fecha2->dia || fecha->mes!=fecha2->mes || fecha->anio!=fecha2->anio)
                {
                    fecha->dia--;

                    if(fecha->dia<1&& fecha->mes!=1)
                    {
                        fecha->mes--;
                        fecha->dia=dias[1][fecha->mes-1];
                    }
                    if(fecha->dia<1 && fecha->mes==1)
                    {
                        fecha->mes=12;
                        fecha->dia=31;
                        fecha->anio--;
                        break;
                    }
                    i++;
                }
                if(fecha->dia!=fecha2->dia || fecha->mes!=fecha2->mes || fecha->anio!=fecha2->anio)
                    i++;
        }else
        {
               while(fecha->dia!=fecha2->dia || fecha->mes!=fecha2->mes || fecha->anio!=fecha2->anio)
                {
                    fecha->dia--;

                    if(fecha->dia<1&& fecha->mes!=1)
                    {
                        fecha->mes--;
                        fecha->dia=dias[0][fecha->mes-1];
                    }
                    if(fecha->dia<1 && fecha->mes==1)
                    {
                        fecha->mes=12;
                        fecha->dia=31;
                        fecha->anio--;
                        break;
                    }
                    i++;
                }
                if(fecha->dia!=fecha2->dia || fecha->mes!=fecha2->mes || fecha->anio!=fecha2->anio)
                    i++;
        }

    }
    return i;
}
