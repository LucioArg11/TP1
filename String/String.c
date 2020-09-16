#include "String.h"

int tolower(int ch)
{
    if(ch>=65 && ch<=90)
        return ch+32;
    return ch;
}

int toupper(int ch)
{
    if(ch>=97 && ch<=122)
        return ch-32;
    return ch;
}

int esPalindromo(char *s,unsigned cant)
{
    char *pfin=s+cant-2,
         *aux=s;

    while((toupper(*aux)==toupper(*pfin)) && (pfin>aux))
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
