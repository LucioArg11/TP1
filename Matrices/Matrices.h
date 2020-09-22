#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define TAM 3
void mostrar_matriz(const int m[][TAM],int col,int fil);
int suma_diagonal_principal(const int m[][TAM],int col,int fil);
int traza_principal(const int m[][TAM],int col,int fil);
int traza_secundaria(const int m[][TAM],int col,int fil);
int es_identidad(const int m[][TAM],int col,int fil);
int es_simetrica(const int m[][TAM],int col,int fil);
void transpone(int m[][TAM],int col,int fil);
#endif // MATRICES_H_INCLUDED
