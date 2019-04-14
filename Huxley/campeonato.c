#include<stdio.h>

main()
{
	int vitorias_C, empates_C, saldo_C, vitorias_F, empates_F, saldo_F;
	int pontos_C = 0;
	int pontos_F = 0;
	scanf("%d%d%d%d%d%d",&vitorias_C, &empates_C, &saldo_C, &vitorias_F, &empates_F, &saldo_F);
	pontos_C += (vitorias_C * 3) + empates_C;
	pontos_F += (vitorias_F * 3) + empates_F;
	if(pontos_C > pontos_F)
	{
		printf("C");
	}
	else if(pontos_F > pontos_C)
	{
		printf("F");
	}
	else
	{
		if (saldo_C > saldo_F)
		{
			printf("C");
		}
		else if (saldo_F > saldo_C)
		{
			printf("F");
		}
		else
		{
			printf("=");
		}
	}
}
