#include <stdio.h>

main()
{
    int n,y,x;
    scanf("%d",&n);
    x=n/10;
    y=n%10;
    if (y!=0&&n%x==0)
    {
        printf("SIM");
    }
    else printf("NAO");
}
