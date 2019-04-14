#include <stdio.h>

main()
{
    int n,i;
    int vetor[10000];
    scanf ("%d",&n);
    for (i=1;i <= n; i++)
    {
        scanf ("%d",&vetor[i]);
    }
      for (i=n;i > 0; i--)
    {
        printf ("%d",vetor[i]);
        if (i >1)
            printf(" ");
    }
}
