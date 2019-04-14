#include <stdio.h>

main()
{
    int x,y,aux;
    scanf ("%d%d",&x,&y);
    if (x>y)
    {
        aux=x;
        x=y;
        y=aux;
    }
    while (x<y-1)
    {
        x++;
        if (x%5==2||x%5==3)
        {
            printf ("%d\n",x);
        }

    }
}
