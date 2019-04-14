#include <stdio.h>

main()
{
    int p2[10000],p3[10000];
    const tam_p2 = 45;
    const tam_p3 = 30;
    int i, j;
    for (i=1;i <= tam_p2;i++)
    {
        scanf ("%d",&p2[i]);
    }
    for (j=1;j <= tam_p3;j++)
    {
        scanf ("%d",&p3[j]);
    }
    for (i=1;i <= tam_p2;i++)
    {
        for (j=1;j <= tam_p3;j++)
        {
            if (p2[i]==p3[j])
            {
                printf ("%d ",p2[i]);
            }
        }
    }
}
