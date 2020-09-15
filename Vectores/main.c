#include "Vectores.h"

int main()
{
    int v[TAM]={1,2,7,3,4,3,3,3,5};
    int v2[TAM]={6,5,4,3,1};
    int cantE=9;

    eliminaTodasApariciones(v,3,&cantE);
    mostrarVector(v,4);
    return 0;
}
