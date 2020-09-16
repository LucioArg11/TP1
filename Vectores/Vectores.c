#include "Vectores.h"
void mostrarVector(int *v,int cantE)
{
    int *pf=v+cantE;
    while(v<pf)
    {
        printf("%d\n",*v);
        v++;
    }
}

int insertaElementoAscendente(int *v,int nro,int *cantE)
{
    if(*cantE>=TAM)
        return 0;
    int *pf= v+ *cantE;
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
    *cantE=*cantE+1;
    return 1;
}



int insertaElementoDescendente(int *v,int nro,int *cantE)
{
    if(*cantE>=TAM)
        return 0;
    int *pf=v+ *cantE;

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
    *cantE=*cantE+1;
    return 1;
}

int eliminaPrimeraAparicion(int *v,int nro,int *cantE)
{
    int *pf=v+ *cantE;
    while(*v!=nro && v<pf)
    {
        v++;
    }
    if(v>pf)
        return 0;
    while(v<pf)
    {
        *v=*(v+1);
        v++;
    }
    return 1;
}

int eliminaTodasApariciones(int *v,int nro,int *cantE)
{
    int *pf=v+*cantE,*aux=v,cambio,cont=1;
    if(*v==nro)
        cont=0;
    while(v<pf)
    {
        while(*aux==nro && aux<pf)
        {
            aux++;
            cont++;
        }
        if(aux<pf)
            *cantE=*cantE-cont;
        cont=0;
        if(v!=aux && aux<pf)
        {
            cambio=*aux;
            *aux=*v;
            *v=cambio;
            *cantE=*cantE+1;
        }
        v++;
        if(aux<pf)
            aux=v;
    }
    return 1;

}
