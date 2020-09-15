#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void mostrarVector(int *v,int cantE);
int insertaElementoAscendente(int *v,int nro,int *cantE);
int insertaElementoDescendente(int *v,int nro,int *cantE);
int eliminaPrimeraAparicion(int *v,int nro,int *cantE);
int eliminaTodasApariciones(int *v,int nro,int *cantE);


#endif // VECTORES_H_INCLUDED
