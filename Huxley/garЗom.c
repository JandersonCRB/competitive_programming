#include<stdio.h>

main()
{
    int bandejas;
    scanf("%d",&bandejas);
    int latas, copos,
        copos_quebrados = 0;
    int i;
    for (i = 0; i < bandejas; i++)
    {
        scanf("%d%d",&latas,&copos);
        if (latas > copos)
        {
            copos_quebrados += copos;
        }
    }
    printf("%d",copos_quebrados);
}
