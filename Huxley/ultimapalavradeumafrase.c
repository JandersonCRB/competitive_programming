#include <stdio.h>
#include <string.h>

main()
{
    char entrada[401];
    int i;
    gets(entrada);
    i = strlen(entrada);
    while (i != -1)
    {
        if (entrada[i] == ' ')
        {
            break;
        }
        i--;
    }
    i++;
    while (i < strlen(entrada))
    {
        printf("%c",entrada[i]);
        i++;
    }
}
