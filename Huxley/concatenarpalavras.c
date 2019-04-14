#include<stdio.h>
#include<string.h>

main()
{
    char entrada[10000];
    char concatena[10000];
    gets(entrada);
    gets(concatena);
    strcat(entrada,concatena);
    printf("%s",entrada);
}
