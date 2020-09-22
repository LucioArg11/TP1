#include "Matrices.h"
void mostrar_matriz(const int m[][TAM],int col,int fil)
{
    int i, j;
    for(i=0;i<fil;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d",m[i][j]);
        }
        printf("\n");
    }
}

int suma_diagonal_principal(const int m[][TAM],int col,int fil)
{
    int i, j,cont=0;
    for(i=0;i<fil;i++)
    {
        for(j=i+1;j<col;j++)
        {
            cont+=m[i][j];
        }
    }
    return cont;
}

int traza_principal(const int m[][TAM],int col,int fil)
{
    int i, j,cont=0;
    for(i=0;i<fil;i++)
    {
        for(j=i;j<=i;j++)
        {
            cont+=m[i][j];
        }
    }
    return cont;
}

int traza_secundaria(const int m[][TAM],int col,int fil)
{
    int i, j,cont=0;
    for(i=fil-1;i>=0;i--)
    {
        for(j=fil-i-1;j<col-i;j++)
        {
            cont+=m[i][j];
        }
    }
    return cont;
}

int es_identidad(const int m[][TAM],int col,int fil)
{
    int i, j;
    for(i=0;i<fil;i++)
    {
        for(j=i;j<col;j++)
        {
           if(j==i && m[i][j]!=1)
                return 0;
           if((m[j][i]!=m[i][j] || m[i][j]!=0 || m[j][i]!=0) && (j!=i))
                return 0;
        }
    }
    return 1;
}

int es_simetrica(const int m[][TAM],int col,int fil)
{
    int i, j;
    for(i=0;i<fil;i++)
    {
        for(j=i;j<col;j++)
        {
           if(m[j][i]!=m[i][j])
                return 0;
        }
    }
    return 1;
}

void transpone(int m[][TAM],int col,int fil)
{
    int i, j,aux;
    for(i=0;i<fil;i++)
    {
        for(j=i;j<col;j++)
        {
           aux=m[i][j];
           m[i][j]=m[j][i];
           m[j][i]=aux;
        }
    }

}
