#include <stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    if (n<0)
    {
        n=n*(-1);
        n=n%10;
        n=n*(-1);
    }
    else {n=n%10;}
    printf ("%d",n);
}
