#include <stdio.h>

main()
{
    int primeiroarray[10000],segundoarray[10000],repeticao,i,i2;
    scanf ("%d",&repeticao);
    for (i=1;i <= repeticao;i++)
    {
        scanf ("%d",&primeiroarray[i]);
    }
    for (i=1;i <= repeticao;i++)
    {
        scanf ("%d",&segundoarray[i]);
    }
    for (i=1;i <= repeticao;i++)
    {
        printf ("%d\n%d\n",primeiroarray[i],segundoarray[i]);
    }
}
