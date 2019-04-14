#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    int tempo = 0;
    int i;
    int pessoas[n];
    scanf("%d",&pessoas[0]);
    for(i = 1; i < n; i++)
    {
        scanf("%d",&pessoas[i]);
        if(pessoas[i] - pessoas[i-1] < 10)
        {
            tempo += pessoas[i] - pessoas[i-1];
        }
        else
        {
            tempo += 10;
        }
    }
    tempo += 10;
    printf("%d",tempo);
}
