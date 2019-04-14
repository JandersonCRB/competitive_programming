#include <stdio.h>

main()
{
    int a,b,n,r;
    scanf ("%d",&n);
    a=n%10;
    b=n/10;
    r=a*10+b;
    printf ("%d",r);
}
