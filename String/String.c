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

