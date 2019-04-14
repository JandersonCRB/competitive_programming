#include<stdio.h>
#include<stdbool.h>

void aumentarPosicao(int *posicao,int limite)
{
    if(*posicao + 1 <= limite)
    {
        *posicao += 1;
    }
    else
    {
        *posicao = 1;
    }
}

bool percorrerArray(int vetor[],int tamanho, int posicao)
{
    int i;
    for(i = 0; i < tamanho; i++)
    {
        if(vetor[i] == posicao)
        {
            vetor[i] = -1;
            return true;
        }
    }
    return false;
}

bool verificaSobra(int vetor[],int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] != -1)
        {
            return true;
        }
    }
    return false;
}

main()
{
    int p, n;
    scanf("%d%d",&p,&n);
    int i;
    int pasta[n];
    int posicao = 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&pasta[i]);
    }
    for (i = 0; i < n; i++)
    {
        if(!percorrerArray(pasta,n,posicao))
        {
            printf("N");
            return 0;
        }
        aumentarPosicao(&posicao,p);
    }
    if(verificaSobra(pasta,n))
    {

        printf("N");
    }
    else
    {
        printf("S");
    }
}
