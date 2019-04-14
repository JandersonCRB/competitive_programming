#include <stdio.h>

main()
{
    double k, soma, n = 2;
    while (k != -1)
    {
        scanf("%lf",&k);
        n=2;
        for (soma = 1;k >= soma;n++)
        {
            soma += (double)(1.0/n);
        }
        n--;
        if (k != -1)
        {
            printf ("%.0lf\n",n);
        }
    }
}
