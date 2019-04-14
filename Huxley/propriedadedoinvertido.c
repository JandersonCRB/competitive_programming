#include <stdio.h>

main()
{
    int x,y,z;
    z=x/10;
    scanf("%d%d",&x,&y);
    while(x<y)
    {
        x=x+1;
        if(x%10!=0)
        {
            if(x%(x/10)==0)
            {
                printf("%d\n",x);
            }
        }
    }
}
