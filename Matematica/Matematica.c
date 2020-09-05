#include "Matematica.h"

long int calculaFactorial(int nro)
{
    int factorial=nro, i;
    for(i=1;i<nro;i++)
    {
        factorial*=i;
    }
    return factorial;
}

int calculaCombinatorio(int m,int n)
{
    int nro1,nro2,nro3,resultado=0;
    if(m<n || n<0)
        return 0;

    nro1=calculaFactorial(m);
    nro2=calculaFactorial(n);
    nro3=calculaFactorial(m-n);
    return resultado=nro1/(nro2*nro3);

}

float elevaE(int x,float TOL)
{
    int i=1;
    float resultado=1,termino=1,pot=1;
    while(termino>TOL)
    {
        pot=pot*x;
        termino=pot/calculaFactorial(i);
        resultado+=termino;
        i++;
    }
    return resultado;
}

int fibonacci(int nro)
{
    int fibo1=1,fibo2=1;
    while(fibo1<nro || fibo2<nro)
    {
        fibo1+=fibo2;
        fibo2+=fibo1;
    }
    if(fibo1==nro || fibo2==nro)
        return 1;
    else
        return 0;
}

double calculaSeno(int nro,float tol)
{
    int i=3;
    double parcial=1,resultado=1,multiplica=-1;
    while(tol<parcial || tol*(-1)>parcial)
    {
        parcial=(float)calculaPotencia(nro,i)/(calculaFactorial(i)*multiplica);
        i+=2;
        multiplica*=-1;
        resultado+=parcial;
    }
    if(resultado>0)
        return resultado;
    else
        return resultado*(-1);
}

int calculaPotencia(int nro,int pot)
{
    int i,potencia=1;
    for(i=0;i<pot;i++)
    {
        potencia*=nro;

    }
    return potencia;
}

double calculaRaizcuadrada(int nro,float tol)
{
    double anterior=nro,parcial=1,limite=1;
    while(limite>tol)
    {
        parcial=0.5*((parcial)+(nro/parcial));
        limite=anterior-parcial;
        anterior=parcial;
    }
    return parcial;
}

int calculaPDA(int nro)
{
    int divisor=0,i;

    for(i=1;i<nro;i++)
    {
        if(nro%i==0)
            divisor+=i;
    }
    return divisor==nro?0:divisor>nro?1:-1;
}

int productoPorSuma(int nro1,int nro2)
{
    int i,suma=0;
    for(i=0;i<nro1;i++)
    {
        suma+=nro2;
    }
    return suma;
}

int division(int a,int b,int *resto)
{
    if(b==0)
        return 0;
    *resto=a%b;
    return a/b;
}

int sumaParesMenores(int nro)
{
    int i,suma=0;
    for(i=0;i<nro;i+=2)
    {
        suma+=i;
    }
    return suma;
}

int sumaNparesMenores(int nro,int n)
{
    int i=0,suma=0,cantN=0;
    while(i<nro && cantN<n)
    {
        suma+=i;
        i=i+2;
        cantN++;
    }
    return suma;
}

int esPrimo(int nro)
{
    int i,divisores=0;
    for(i=1;i<=nro;i++)
    {
        if(nro%i==0)
            divisores++;
    }
    return divisores==2?1:0;
}
