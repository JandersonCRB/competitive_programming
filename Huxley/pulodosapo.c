#include <stdio.h>

main()
{
    int quantidade_pedras,sapos;
    scanf ("%d%d",&quantidade_pedras,&sapos);
    int pedras[quantidade_pedras];
    int posicao_inicial,pulo,i,j;

    for (i = 0;i < quantidade_pedras;i++)
    {
        pedras[i] = 0;
    }
    for (i = 0; i < sapos; i++)
	{
		scanf("%d%d",&posicao_inicial,&pulo);
		for (j = posicao_inicial - 1; j <= quantidade_pedras - 1; j += pulo)
		{
			pedras[j] = 1;
		}

		for (j = posicao_inicial - 1; j >= 0; j -= pulo)
		{
			pedras[j] = 1;
		}
	}
	for (i = 0; i < quantidade_pedras; i++)
	{
		printf("%d\n", pedras[i]);
	}
}
