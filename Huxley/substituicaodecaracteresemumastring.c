#include <stdio.h>
#include <string.h>

main()
{
	char entrada[101];
	char caractere1[2];
	char caractere2[2];
	gets(entrada);
	scanf("%c\n%c",&caractere1[0],&caractere2[0]);
	int i;
	for (i = 0;i < strlen(entrada);i++)
	{
		if (entrada[i] == caractere1[0])
		{
			entrada[i] = caractere2[0];
		}
	}
	printf("%s",entrada);
}
