#include<stdio.h>

main()
{
	int pedacos;
	scanf("%d",&pedacos);
	int divisoes;
	int i;
	int guardados = 0;
	for (i = 0;i < pedacos;i++)
	{
		scanf("%d",&divisoes);
		guardados += divisoes - 1;
	}
	printf("%d",guardados);
}
