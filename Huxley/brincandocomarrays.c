#include <stdio.h>

main()
{
    int x[10000],n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for (i=n-1;i>=0;i--)
    {
        printf("%d ",x[i]);
    }
    printf ("\n");
    for (i=n-1;i>=0;i--)
    {
        x[i]=x[i]<<1;
        printf("%d ",x[i]);
    }
}
