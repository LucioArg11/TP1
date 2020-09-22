#include "Matrices.h"

int main()
{
    int m[][TAM]= {{1,2,9},
                   {4,5,6},
                   {7,8,9}};
     int m2[][TAM]= {{1,2,3},
                     {2,1,0},
                     {3,0,1}};
    int nro;
   //nro=es_simetrica(m2,3,3);
    transpone(m,3,3);
    mostrar_matriz(m,3,3);
    return 0;
}
