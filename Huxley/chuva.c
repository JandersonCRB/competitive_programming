#include <stdio.h>

main()
{
    int dimensao;
    scanf("%d",&dimensao);
    int mapa[2][dimensao * dimensao];
    int resultado[dimensao * dimensao];
    int i,j;
    int contador = 0;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < dimensao * dimensao; j++)
        {
            scanf("%d",&mapa[i][j]);
        }
    }
    for(i = 0; i < dimensao * dimensao; i++)
    {
        resultado[i] = mapa[0][i] + mapa[1][i];
    }
    for(i = 0; i < dimensao * dimensao; i++)
    {
        printf("%d",resultado[i]);
        contador++;
        if(contador == dimensao)
        {
        	contador = 0;
            printf(" \n");
        }
        else
        {
			printf(" ");
        }
    }
}
