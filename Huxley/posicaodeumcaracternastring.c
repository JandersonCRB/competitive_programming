#include <stdio.h>

main()
{
	char str[255];
	char caracter[2];
	gets (str);
	scanf("%c",&caracter);
	int i;
	int posicao = -1;
	for (i = 0;i < strlen(str);i++)
	{
		if (str[i] == caracter[0])
		{
			posicao = i;
			break;
		}
	}
	printf("%d\n",posicao);
}
