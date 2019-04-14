#include<stdio.h>

typedef struct
{
	int codigo;
	int quantidade;
}mercadoria;

main()
{
	mercadoria mercadoria[100];
	int i;
	int cliente;
	int quantidade_mercadoria, mercadoria_solicitada, quantidade_solicitada;
	for (i = 0;i < 100;i++)
	{
		mercadoria[i].codigo = 0;
		mercadoria[i].quantidade = 0;
	}
	i = 0;
	scanf("%d",&mercadoria[i].codigo);
	while(mercadoria[i].codigo != 9999)
	{
		scanf("%d",&mercadoria[i].quantidade);
		i++;
		scanf("%d",&mercadoria[i].codigo);
	}
	quantidade_mercadoria = i;
	scanf("%d",&cliente);
	while (cliente != 9999)
	{
		scanf("%d",&mercadoria_solicitada);
		for (i = 0;i < quantidade_mercadoria;i++)
		{
			if(mercadoria[i].codigo == mercadoria_solicitada)
			{
				break;
			}
		}
		scanf("%d",&quantidade_solicitada);
		if(mercadoria[i].quantidade >= quantidade_solicitada)
		{
			mercadoria[i].quantidade -= quantidade_solicitada;
			printf("OK\n");
		}
		else
		{
			printf("ESTOQUE INSUFICIENTE\n");
		}
		scanf("%d",&cliente);
	}
	for(i = 0;i < quantidade_mercadoria;i++)
	{
		printf("%d %d\n",mercadoria[i].codigo, mercadoria[i].quantidade);
	}
}
