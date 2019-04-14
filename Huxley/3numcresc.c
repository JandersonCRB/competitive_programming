#include <stdio.h>

main()
{
    int x,y,z,a,b,c;
    scanf ("%d%d%d",&x,&y,&z);

        if (x<=y&&x<=z)
    {
        a=x;
    }
        if (x>=y&&x<=z)
    {
        b=x;
    }
        if (x<=y&&x>=z)
    {
        b=x;
    }
        if (x>=y&&x>=z)
    {
        c=x;
    }
        if (y<=x&&y<=z)
    {
        a=y;
    }
        if (y>=x&&y<=z)
    {
        b=y;
    }
        if (y<=x&&y>=z)
    {
        b=y;
    }
        if (y>=x&&y>=z)
    {
        c=y;
    }
        if (z<=x&&z<=y)
    {
        a=z;
    }
        if (z>=x&&z<=y)
    {
        b=z;
    }
        if (z<=x&&z>=y)
    {
        b=z;
    }
        if (z>=x&&z>=y)
    {
        c=z;
    }
    printf ("%d\n%d\n%d",a,b,c);
}
