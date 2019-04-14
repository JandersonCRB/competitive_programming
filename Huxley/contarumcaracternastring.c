#include<stdio.h>
#include<string.h>

main()
{
	char entrada[51];
	char substitui[2];
	int contador = 0;
	gets(entrada);
	scanf("%c",&substitui[0]);
	int i;
	for(i = 0;i < strlen(entrada);i++)
	{
		if (entrada[i] == substitui[0])
		{
			contador++;
		}
	}
	printf("%d",contador);
}
