#ifndef MATEMATICA_H_INCLUDED
#define MATEMATICA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


long int calculaFactorial(int nro);
int calculaCombinatorio(int m,int n);
float elevaE(int x,float TOL);
int fibonacci(int nro);
double calculaSeno(int nro,float tol);
int calculaPotencia(int nro,int pot);
double calculaRaizcuadrada(int nro,float tol);
int calculaPDA(int nro);
int productoPorSuma(int nro1,int nro2);
int division(int a,int b,int*resto);
int sumaParesMenores(int nro);
int sumaNparesMenores(int nro,int n);
int esPrimo(int nro);
#endif // MATEMATICA_H_INCLUDED
