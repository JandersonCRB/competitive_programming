#include <stdio.h>

main()
{
    int x,y,z,r;
    scanf ("%d%d%d",&x,&y,&z);

        if (x<=y&&x<=z)
    {
        r=x;
    }
        if (y<=x&&y<=z)
    {
        r=y;
    }
        if (z<=x&&z<=y)
    {
        r=z;
    }
    printf ("%d",r);
}
