#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    char str[10000];
    char substr[10000];
    char *aux;
    int i;
    int repeticao = 0;
    gets(str);
    gets(substr);
    aux = strstr(str,substr);
    if (aux != NULL)
    {
        repeticao++;
        for (i = 0; i < strlen(substr); i++)
        {
            aux[i] = ' ';
        }
    }

    while(aux != NULL)
    {
        aux = strstr(str,substr);
        if (aux != NULL)
        {
            repeticao++;
            for (i = 0; i < strlen(substr); i++)
            {
                aux[i] = ' ';
            }
        }
    }
    printf("%d",repeticao);
}
