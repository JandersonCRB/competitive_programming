#include<stdio.h>
#include<stdbool.h>

main()
{
    int n;
    scanf("%d",&n);
    int quadrado[n][n];
    int i,j;
    bool quadrado_magico = true;
    int soma = 0;
    int soma_aux = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&quadrado[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        soma += quadrado[i][0];
    }
    for(j = 0; j < n; j++)
    {
        soma_aux += quadrado [0][j];
    }
    if(soma_aux != soma)
    {
        quadrado_magico = false;
    }
    soma_aux = 0;
    for (i = 0; i < n; i++)
    {
        soma_aux += quadrado[i][n - 1];
    }
    if(soma_aux != soma)
    {
        quadrado_magico = false;
    }
    soma_aux = 0;
    for(j = 0; j < n; j++)
    {
        soma_aux += quadrado [n - 1][j];
    }
    if(soma_aux != soma)
    {
        quadrado_magico = false;
    }
    soma_aux = 0;
    for (i = 0, j = 0; i < n; i++, j++)
    {
        soma_aux += quadrado [i][j];
    }
    if(soma_aux != soma)
    {
        quadrado_magico = false;
    }
    soma_aux = 0;
    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        soma_aux += quadrado [i][j];
    }
    if(soma_aux != soma)
    {
        quadrado_magico = false;
    }
    if(quadrado_magico)
	{
		printf("%d",soma);
	}
	else
	{
		printf("-1");
	}
//	for(i = 0;i < n;i++)
//	{
//		for(j = 0;j < n;j++)
//		{
//			printf("%d ",quadrado[i][j]);
//		}
//		printf("\n");
//	}
}
