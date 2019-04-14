#include <stdio.h>

main()
{
    int fibonacci[48] = {0};
    int n,i;
    fibonacci [1] = 0;
    fibonacci [2] = 1;
    fibonacci [3] = 1;
    for (i = 4;i <= 47;i++)
    {
        fibonacci[i] = fibonacci [i-1] + fibonacci [i-2];
    }
    scanf ("%d",&n);
    while (n != 0)
    {
        for (i = 1;i < n;i++)
        {
            printf ("%d ",fibonacci[i]);
        }
        printf ("%d\n",fibonacci[i]);
        scanf ("%d",&n);
    }
}
