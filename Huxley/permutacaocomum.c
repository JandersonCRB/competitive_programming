#include <stdio.h>
#include <string.h>

void BubbleSort(char vetor[], int tamanho)
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

verifica(char entrada,char saida[],int tamanho)
{
    int i;
    int vezes = 0;
    for (i = 0;i < tamanho;i++)
    {
        if (entrada == saida[i])
        {
            printf ("entrou");
            vezes++;
        }
    }
    return vezes;
}

main()
{
    int i,j,l,repetido;
    int k = 0;
    char entrada[256],entrada2[256],saida[512];
    gets (entrada);
    gets (entrada2);
    while (strcmp(entrada,"fim") && strcmp(entrada2,"fim"))
    {
        k = 0;
        strcpy(saida,"");
        for (i = 0;i < strlen(entrada);i++)
        {
            for (j = 0;j < strlen (entrada2);j++)
            {
                if (entrada[i] == entrada2[j])
                {
//                      repetido = verifica(entrada[i],saida,strlen(saida));
//                      printf ("%d",repetido);
                        saida[k] = entrada[i];
                        entrada2[j] = ' ';
                        k++;
                        break;
                }
            }
        }
        saida[k] = '\0';
        BubbleSort(saida,strlen(saida));
        printf ("%s\n",saida);
        gets (entrada);
        gets (entrada2);
    }
}
