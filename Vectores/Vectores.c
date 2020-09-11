#include "Vectores.h"
void insertaElemento(int *v,int nro)
{
    int *pf=v+TAM;
    while(*v<nro && v<pf)
    {
        v++;
    }
    while(pf>=v)
    {
        *(pf+1)=*pf;
        pf--;
    }
    *(pf+1)=nro;
}

void mostrarVector(int *v)
{
    int *pf=v+TAM;
    while(v<pf)
    {
        printf("%d\n",*v);
        v++;
    }
}

void insertaElementoDescendente(int *v,int nro)
{
    int *pf=v+TAM;
    while(*v>nro && v<pf)
    {
        v++;
    }
    while(pf>=v)
    {
        *(pf+1)=*pf;
        pf--;
    }
    *(pf+1)=nro;
}

void eliminaPrimeraAparicion(int *v,int nro)
{
    int *pf=v+TAM;
    while(*v!=nro && v<pf)
    {
        v++;
    }
    while(v<pf)
    {
        *v=*(v+1);
        v++;
    }
}

void eliminaTodasApariciones(int *v,int nro)
{
    int *pf=v+TAM,*aux=v+1;
    while(v<pf)
    {
        while(*aux==nro)
        {
            aux++;
        }
        while(v!=aux)
        {
            *v=*aux;
        }
        v++;
        aux=v;
    }

