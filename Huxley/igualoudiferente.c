#include <stdio.h>

main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("1");
    }
    else if (a!=b&&b!=c&&a!=c)
    {
        printf("2");
    }
    else
    {
        printf("3");
    }
}
