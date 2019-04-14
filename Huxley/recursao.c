#include<stdio.h>
#define TAM 50

imprimir(int i,int vetor[],int n)
{
    if(i < n)
    {
        printf("%d\n",vetor[i]);
        imprimir(i+1,vetor,n);
    }
}

preencher(int i,int vetor[],int n)
{
    if (i < n)
    {
        vetor[i] = i;
        preencher(i+1,vetor,n);
    }
}

main()
{
    int vetor[TAM];
    preencher(0,vetor,TAM);
    imprimir(0,vetor,TAM);
}
