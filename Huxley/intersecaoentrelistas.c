#include <stdio.h>
#define TAM 20
void BubbleSort(int vetor[], int tamanho)
{
        int aux, i, j;

        for(j=tamanho-1; j>=1; j--)
        {
                for(i=0; i<j; i++)
                {
                        if(vetor[i]>vetor[i+1])
                        {
                                aux=vetor[i];
                                vetor[i]=vetor[i+1];
                                vetor[i+1]=aux;
                        }
                }
        }
}

int repetido(int numero,int vetor[],int tamanho)
{
    int i;
    for (i = 0;i < tamanho;i++)
    {
        if (vetor[i] == numero)
        {
            return 1;
        }
    }
    return 0;
}

main()
{
    int array_1[10000],array_2[10000],intersecao[10000];
    int i,j,k = 0,achou = 0;
    for (i = 0;i < TAM;i++)
    {
        scanf ("%d",&array_1[i]);
    }
    for (i = 0;i < TAM;i++)
    {
        scanf ("%d",&array_2[i]);
    }
    for (i=0; i<TAM; ++i)
    {
        for (j=0; j<TAM; ++j)
        {
            if (array_1[i] == array_2[j] && !repetido(array_1[i],intersecao,k))
            {
                achou = 1;
                intersecao[k] = array_1[i];
                k++;
            }
        }
    }
    if (!achou)
    {
        printf("VAZIO");
    }
    BubbleSort (intersecao,k);
    for (i=0;i < k;i++)
    {
        printf ("%d\n",intersecao[i]);
    }
}
