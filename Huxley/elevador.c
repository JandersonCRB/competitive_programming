#include <stdio.h>

main()
{
    int n,c,s,e,i,total,counter;
    total=0;
    scanf("%d%d",&n,&c);
    for(i = 0; i < n; i++)
        {
        scanf("%d%d",&s,&e);
        total+=(e-s);
        if(total>c)
        {
           counter=1;
        }
        }
        if(counter==1)
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
}
