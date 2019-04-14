#include <stdio.h>

main()
{
    int n[20],i,repeticao;
    scanf ("%d",&repeticao);
    for (i=1;i <= repeticao;i++)
    {
        scanf ("%d",&n[i]);
    }
    for (i=1;i <= repeticao;i++)
    {
        printf ("%d\n",n[i] * 2);
    }
}
