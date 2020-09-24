#include "String.h"

int mi_tolower(int ch)
{
    if(ch>=65 && ch<=90)
        return ch+32;
    return ch;
}

int mi_toupper(int ch)
{
    if(ch>=97 && ch<=122)
        return ch-32;
    return ch;
}

int esPalindromo(char *s,unsigned cant)
{
    char *pfin=s+cant-2,
         *aux=s;

    while((mi_toupper(*aux)==mi_toupper(*pfin)) && (pfin>aux))
    {
        pfin--;
        aux++;
        while(*pfin==' ')
        {
            pfin--;
        }
        while(*aux==' ')
        {
            aux++;
        }
    }
    return pfin<=aux?1:0;

}

int valorNumerico(char *s)
{
    int valor=0;
    char *aux=s;
    while(*aux)
    {
        valor+= *aux;
        aux++;
    }
    return valor;
}

size_t strlen(const char *s)
{
    size_t cont=0;
    while(*s)
    {
        cont++;
        s++;
    }
    return cont;
}

/**Se pide desarrollar una estrategia para resolver una función que permite 'normalizar' una cadena de caracteres.

    Dada una cadena de texto :

    1) Borrar los espacios en blanco de toda la cadena
    2) Transformar a mayúsculas la primer letra de cada palabra y el resto a minúsculas
    3) Normalizar la cadena al formato : APELLIDO(S), Nombre(s)". Debe haber un espacio luego de la coma, ninguno atrás o delante
**/

void saca_espacios(char *s)
{
    char *aux,
          cambio;
    int espacios=0;
    while(isspace(*s))///para desplazar el comienzo de la cadena en caso de que no empiece con letra
        s++;

    while(*s)
    {
        while(isalpha(*s))
            s++;
        while(isspace(*s))
        {
            s++;
            espacios++;
        }
        aux=s;
        if(espacios>1)
        {
            while(isalpha(*s))
                s++;
        }

    }

}
